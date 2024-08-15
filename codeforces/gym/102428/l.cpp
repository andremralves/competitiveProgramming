#include <bits/stdc++.h>

using namespace std;
using ll = long long;

template <typename T> struct BIT2d {
    int N, M;
    vector<vector<T>> vs;

    BIT2d(int n, int m) : N(n), M(m), vs(n+1, vector<T>(m+1)) {}
    BIT2d(const vector<vector<T>> &v) : BIT2d((int)v.size(), (int)v[0].size()) {
        for (int i = 0; i < N; i++) {
            for (int j = 0; j < M; j++) {
                update(i, j, v[i][j]);
            }
        }
    }

    void update(int x, int y, const T& v) {
        for (++x; x <= N; x += x & -x)
            for (int i = y + 1; i <= M; i += i & -i)
                vs[x][i] += v;
    }

    T query(int x1, int y1, int x2, int y2) {
        return query(x2, y2) - query(x1-1, y2) - query(x2, y1-1) + query(x1-1, y1-1);
    }

    T query(int x, int y) {
        if (x < 0 || y < 0) return T();
        T sum = 0;
        for (int i = x+1; i; i -= i & -i)
            for (int j = y+1; j; j -= j & -j)
                sum += vs[i][j];
        return sum;
    }
};

void solve() {
    int n, m;
    cin >> n >> m;
    vector<bitset<1000>> g(n);
    BIT2d<int> bit(n, m);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            char c; cin >> c;
            g[i][j] = (c == 'G');
            if (g[i][j]) bit.update(i, j, 1);
        }
    }

    auto expand = [&](int i, int j) {
        int l = 0, r = min(n-i, m-j) - 1;
        while (l <= r) {
            auto mid = l + (r - l) / 2;
            if (bit.query(i, j, i+mid, j+mid) == (mid + 1) * (mid + 1))
                l = mid + 1;
            else
                r = mid - 1;
        }

        auto far = r;
        l = 0, r = min(i, j);
        while (l <= r) {
            auto mid = l + (r - l) / 2;
            if (bit.query(i-mid, j-mid, i+far, j+far) == (far+mid+1)*(far+mid+1))
                l = mid + 1;
            else
                r = mid - 1;
        }

        return (far + r + 1) * (far + r + 1);
    };

    int res = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            res = max(res, expand(i, j));
        }
    }

    for (int i = 0; i < n; i++) {
        g[i] = ~g[i];
        for (int j = 0; j < m; j++) {
            if (g[i][j]) bit.update(i, j, 1);
            else bit.update(i, j, -1);
        }
        for (int j = 0; j < m; j++) {
            if (g[i][j])
                res = max(res, expand(i, j));
        }
    }
    cout << res << '\n';
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    solve();
}
