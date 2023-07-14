/**
 *    author: mralves 
 *    created: 05-06-2023 09:23:52       
**/
#include <bits/stdc++.h>

#define pb(x) push_back(x)
#define all(x) x.begin(),x.end()

using namespace std;
using ll = int64_t;
using ii = pair<int, int>;

ll ceil(ll a, ll b) {return a % b == 0 ? a / b : a / b + 1;}
vector<ii> dir4 = {{1, 0}, {0, 1}, {-1, 0}, {0, -1}};
vector<ii> dir8 = {{1, 0}, {1, 1}, {0, 1}, {-1, 1}, {-1, 0}, {-1, -1}, {0, -1}, {1, -1}};

void solve() {
    int n, k;
    string s;
    cin>>n>>k>>s;
    vector<bool> available(26);
    for(int i=0; i<k; i++) {
        char c; cin>>c;
        available[c-'a'] = 1;
    }

    vector<bool> ok(n);
    for(int i=0; i<n; i++) {
        ok[i] = available[s[i]-'a'];
    }

    vector<int> f(n+1);
    f[0] = 0;
    ll ans = 0;
    for(int i=0; i<n; i++) {
        if(ok[i] == 0) {
            f[i+1] = 0;
        } else {
            f[i+1] = f[i] + 1;
        }
        ans += f[i+1];
    }
    cout<<ans<<"\n";
}

int main ()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int t = 1;
    while (t--) solve();
    return 0;
}
