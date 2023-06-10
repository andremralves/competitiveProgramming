/**
 *    author: mralves 
 *    created: 06-06-2023 00:56:51       
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
    int n;
    cin>>n;
    vector<ii> ps(n);
    ll f[n+1][8];
    const ll inf = 2e6;
    for(int i=0; i<=n; i++) {
        for(int j=0; j<8; j++) {
            f[i][j] = inf;
        }
    }

    for(int i=0; i<n; i++) {
        ll cost;
        string s;
        cin>>cost>>s;
        int mask = 0;
        for(auto c : s) {
            mask += 1 << (c-'a');
        }
        ps[i] = {cost, mask};
        f[0][0] = 0;
        for(ll mask = 0; mask < 8; mask++) {
            f[i+1][mask] = min(f[i+1][mask], f[i][mask]);
            f[i+1][mask | ps[i].second] = min(f[i+1][mask | ps[i].second], ps[i].first + f[i][mask]);
        }

    }
    ll ans = f[n][7];
    if(ans == inf) ans = -1;
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
