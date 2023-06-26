/**
 *    author: mralves 
 *    created: 25-06-2023 18:04:19       
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
    int N, W;
    cin>>N>>W;
    vector<int> w(N+1), v(N+1);
    for(int i=1; i<=N; i++) {
        cin>>w[i]>>v[i];
    }

    // dp[items][value] = {minimun weight}
    const ll inf = 1e9+10;
    vector<vector<ll>> dp(N+1, vector<ll>(N*1001, inf));


    int ans = 0;
    for(int i=1; i<=N; i++) {
        for(int j=0; j<=N*1000; j++) {
            if(j-v[i] == 0)
                dp[i][j] = min(dp[i-1][j], (ll)w[i]);
            else if(j-v[i] > 0)
                dp[i][j] = min(dp[i-1][j], dp[i-1][j-v[i]] + w[i]);

            dp[i][j] = min(dp[i-1][j], dp[i][j]);

            if(dp[i][j] <= W)
                ans = max(ans, j);
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
