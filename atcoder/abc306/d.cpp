/**
 *    author: mralves 
 *    created: 17-06-2023 08:52:30       
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

    vector<pair<ll, ll>> ps;
    for(int i=0; i<n; i++) {
        int x, y;
        cin>>x>>y;
        ps.emplace_back(x, y);
    }

    pair<ll, ll> dp[n][2];
    dp[0][0] = {0, 0};
    dp[0][1] = {ps[0].second, ps[0].first};
    for(int i=1; i<n; i++) {
        ll x = ps[i].second;
        dp[i][0] = max(dp[i-1][0], dp[i-1][1]);
        if(ps[i].first == 0 or (dp[i-1][0].second == 0 and dp[i-1][1].second == 0)) {
            dp[i][1].first = max(dp[i-1][0].first + x, dp[i-1][1].first + x);
            dp[i][1].second = ps[i].first;
        } else if(dp[i-1][0].second == 1 and dp[i-1][1].second == 1) {
            dp[i][1] = dp[i][0];
            dp[i][1].second = ps[i].first;
        } else if(dp[i-1][0].second == 0) {
            dp[i][1].first = dp[i-1][0].first + x;
            dp[i][1].second = ps[i].first;
        } else if(dp[i-1][1].second == 0) {
            dp[i][1].first = dp[i-1][1].first + x;
            dp[i][1].second = ps[i].first;
        }     
        cout<<dp[i][0].first<<" ";
        cout<<dp[i][1].first<<"\n";
    }
    cout<<max(dp[n-1][0].first, dp[n-1][1].first)<<"\n";
}

int main ()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int t = 1;
    while (t--) solve();
    return 0;
}
