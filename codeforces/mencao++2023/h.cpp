/**
 *    author: mralves 
 *    created: 22-07-2023 09:40:15       
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
    cin>> n;
    vector<ll> dp(n+2);
    dp[0] = 0;
    dp[1] = 1;
    for(int i=2; i<=n+1; i++) {
        dp[i] = dp[i-1]+dp[i-2];
    }
    cout<<dp[n+1]<<"\n";
}

int main ()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int t = 1;
    while (t--) solve();
    return 0;
}
