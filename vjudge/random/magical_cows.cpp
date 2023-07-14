/**
 *    author: mralves 
 *    created: 28-06-2023 10:19:52       
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
    int C, N, M;
    cin>>C>>N>>M;

    vector<int> a(N);
    vector<vector<ll>> dp(51, vector<ll>(C+1));
    for(int i=0; i<N; i++) {
        cin>>a[i];
    }

    for(int i=0; i<N; i++) {
        dp[0][a[i]]++;
    }

    for(int i=1; i<=50; i++) {
        for(int j=1; j<=C; j++) {
            if(j*2 <= C)
                dp[i][j*2] += dp[i-1][j];
            else {
                dp[i][j] += dp[i-1][j]*2;
            }
        }
    }

    while(M--) {
        int q; cin>>q;
        ll ans = 0;
        for(int i=1; i<=C; i++) {
            ans += dp[q][i];
        }
        cout<<ans<<"\n";
    }
}

int main ()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int t = 1;
    while (t--) solve();
    return 0;
}
