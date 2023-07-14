#include <bits/stdc++.h>

#define pb(x) push_back(x)
#define all(x) x.begin(),x.end()

using namespace std;
using ll = int64_t;

void solve() {
    int N, W;
    cin>>N>>W;
    vector<int> w(N+1), v(N+1);
    for(int i=1; i<=N; i++) {
        cin>>w[i]>>v[i];
    }

    vector<vector<ll>> dp(N+1, vector<ll>(W+1, 0));

    for(int i=1; i<=N; i++) {
        for(int j=0; j<=W; j++) {
            if(w[i] <= j)
                dp[i][j] = max(dp[i-1][j], v[i] + dp[i-1][max(j-w[i], 0)]);
            else
                dp[i][j] = dp[i-1][j];
        }
    }
    cout<<dp[N][W]<<"\n";
}

int main ()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int t = 1;
    while (t--) solve();
    return 0;
}
