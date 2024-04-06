/**
 *    author: mralves 
 *    created: 11-08-2023 14:57:32       
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
    ll h, n; 
    cin>>h>>n;
    vector<ll> a(n), cost(n);
    ll max_cost = 1e8+10;
    for(int i=0; i<n; i++) {
        cin>>a[i]>>cost[i];
    }

    vector<ll> dp(max_cost+1);
    dp[0] = 0;
    ll ans = 0;
    for(int i=1; i<=max_cost; i++) {
        for(int j=0; j<n; j++) {
            if(cost[j] <= i) {
                dp[i] = max(dp[i], dp[i-cost[j]]+a[j]);
            }
        }
        if(dp[i] >= h) {
            ans = i;
            break;
        }
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
