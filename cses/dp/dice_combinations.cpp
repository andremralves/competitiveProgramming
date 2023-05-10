/**
 *    author: mralves 
 *    created: 09-05-2023 23:13:26       
**/
#include <bits/stdc++.h>

#define pb(x) push_back(x)
#define all(x) x.begin(),x.end()

using namespace std;
using ll = int64_t;

ll ceil(ll a, ll b) {return a % b == 0 ? a / b : a / b + 1;}

const ll MOD = 1e9+7;

void solve() {
    int n;
    cin>>n;
    vector<ll> memo(n+1, 0);
    memo[0] = 1;
    for(int i=1; i<=n; i++) {
        for(int j=1; j<=6; j++) {
            if(i - j >= 0) {
                memo[i] += memo[i-j];
                memo[i] %= MOD;
            }
        }
    }
    cout<<memo[n]<<"\n";
}

int main ()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int t = 1;
    //cin>>t;
    while (t--) solve();
    return 0;
}

