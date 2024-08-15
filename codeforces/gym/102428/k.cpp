#include <bits/stdc++.h>

using namespace std;
using ll = long long;
using vll = vector<ll>;

void solve() {
        string s;
        cin >> s;

        vll cs;
        int n = s.size();
        for (ll i = 1; i < n; i++) {
                if (s[i] != s[i-1]) {
                        cs.push_back((i+1)*2ll-1);
                }
        }

        if (cs.empty()) {
                cout << "0\n";
                cout << (s[0] == 'H') * 2 - 1 << '\n';
                return;
        }

        vector<ll> prev(cs.size() + 1);
        prev[0] = 1;

        for (int i = 0; i < (int)cs.size(); i++) {
                for (int j = (int)cs.size(); ~j; --j) {
                        prev[j] = prev[j] * -cs[i] + (j ? prev[j-1] : 0);
                }
        }

        int f = 1;
        if ((prev[0] < 0 and s[0] == 'H') or (prev[0] > 0 and s[0] == 'A'))
            f = -1;
        reverse(prev.begin(), prev.end());
        cout << prev.size() - 1 << '\n';
        for (auto x : prev) {
                cout << f*x << ' ';
        }

        cout << '\n';
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    solve();
}

