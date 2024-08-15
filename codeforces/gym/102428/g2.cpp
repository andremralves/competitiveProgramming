#include <bits/stdc++.h>

using namespace std;
using ll = long long;

const int MAXN(1'000'000);
const int MOD = 1e7;
const int MOD2 = 1e9;
const ll P = 31;
using vll = vector<ll>;
using pll = pair<ll, ll>;


ll _p[MAXN +1], _p2[MAXN +1];

void precompute() {
    _p[0] = _p2[0] = 1;
    for(int i=1; i<= MAXN; i++) {
        _p[i] = (P * _p[i-1]) % MOD;
        _p2[i] = (P * _p2[i-1]) % MOD2;
    }
}
struct Hash {

    int n;
    vll h, h2, hi, hi2;
    Hash() {}

    Hash(const string& s)
        : n(s.size()), h(n), h2(n), hi(n), hi2(n) {
        precompute();
        h[0] = h2[0] = s[0];
        for(int i=1; i<n; i++) {
            h[i] = (s[i] + h[i-1] * P) % MOD;
            h2[i] = (s[i] + h2[i-1] * P) % MOD2;
        }

        hi[n-1] = h2[n-1] = s[n-1];
        for(int i=n-2; i>=0; i--) {
            hi[i] = (s[i] + hi[i+1] * P) % MOD;
            hi2[i] = (s[i] + hi2[i+1] * P) % MOD2;
        }
    }

    pll query(int l, int r) {
        ll hash =
            (h[r] - (l ? h[l-1] *_p[r-l+1] % MOD : 0));
        ll hash2 =
            (h2[r] - (l ? h2[l-1] * _p2[r-l+1] % MOD2 : 0));

        return {(hash <0 ? hash + MOD : hash),
        (hash2 < 0 ? hash2 + MOD2 : hash2)};

    }
};

vector<int> sort_cyclic_shifts(string const& s) {
    int n = s.size();
    const int alphabet = 128;

    vector<int> p(n), c(n), cnt(max(alphabet, n), 0);
    for(int i=0; i<n; i++) cnt[s[i]]++;
    for(int i=1; i<alphabet; i++) cnt[i] += cnt[i-1];
    for(int i=0; i<n; i++) p[--cnt[s[i]]] = i;
    c[p[0]] = 0;
    int classes = 1;
    for(int i=1; i<n; i++) {
        if (s[p[i]] != s[p[i -1]]) classes++;
        c[p[i]] = classes - 1;
    }

    vector<int> pn(n), cn(n);
    for(int h=0; (1<<h) <n; ++h) {
        for(int i=0; i<n; i++) {
            pn[i] = p[i] - (1<<h);
            if(pn[i] < 0 ) pn[i] += n;
        }
        fill(cnt.begin(), cnt.begin() + classes, 0);
        for(int i=0; i<n; i++) cnt[c[pn[i]]]++;
        for(int i=1; i< classes; i++) cnt[i] += cnt[i-1];
        for(int i=n-1; i>=0; i--) {
            p[--cnt[c[pn[i]]]] = pn[i];
        }
        cn[p[0]]= 0;
        classes = 1;
        for(int i=1; i<n; i++)  {
            pair<int, int> cur = {c[p[i]],
                                  c[(p[i]+(1<<h)) % n]};
            pair<int, int> prev = {c[p[i-1]],
                                   c[(p[i-1] + (1<<h)) % n]};
            if(cur != prev) ++classes;
            cn[p[i]] = classes -1;
        }
        c.swap(cn);
    }

    return p;
}

vector<int> suffix_array(string s) {
    s += "$";
    vector<int> vec = sort_cyclic_shifts(s);
    vec.erase(vec.begin());
    return vec;
}

void solve() {
    string s;
    cin >> s;

    Hash hash_s(s);
    auto sa = suffix_array(s);

    int q;
    cin >> q;

    while (q--) {
        string t;
        cin >> t;
        Hash hash_t(t);

        int ans = 0;
        for (int i = 0; i < t.size();) {
            int until = -1;
            for (int szl = i, szr = t.size()-1; szl <= szr; ) {
                    int j = (szl + szr) / 2;

                    string cur = t.substr(i, j-i+1);

                    int best = INT_MAX;
                    for (int l = 0, r = sa.size()-1; l <= r; ) {
                            int mid = (l+r)/2;
                            int saval = sa[mid];
                            if (s.substr(saval) >= cur) {
                                    best = min(best, mid);
                                    r = mid - 1;
                            }
                            else l = mid + 1;
                    }


                    if (best == INT_MAX or (s.size()-sa[best]+1 < cur.size()) or (memcmp(&cur[0], &s[sa[best]], cur.size()))) { // ja trata isso
                    // if (best == INT_MAX or (s.size()-sa[best]+1 < cur.size()) or (cur != s.substr(sa[best], j-i+1))) { // ja trata isso
                            szr = j - 1;
                    }
                    else {
                            until = max(until, j);
                            szl = j + 1;
                    }


            }

            ans++;
            if (until == -1) {
                ans = -1;
                break;
            }
            i = until + 1;
        }

        cout << ans << '\n';
    }

}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    solve();
}
