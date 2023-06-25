/**
 *    author: mralves 
 *    created: 24-06-2023 09:06:53       
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

const ll MOD = 998244353;

ll dp[(int)2e6][2];
void solve() {
    ll n, m;
    cin>>n>>m;

    dp[0][0] = m;
    dp[0][1] = 0;

    for(int i=1; i<n; i++) {
        dp[i][0] = dp[i-1][1];
        dp[i][1] = ((m-1) * dp[i-1][0] + (m-2) * dp[i-1][1]) % MOD;
    }
    cout<<dp[n-1][1]<<"\n";

}

int main ()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int t = 1;
    while (t--) solve();
    return 0;
}
