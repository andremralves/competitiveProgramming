/**
 *    author: mralves 
 *    created: 29-04-2023 08:54:58       
**/
#include <bits/stdc++.h>

#define pb(x) push_back(x)
#define all(x) x.begin(),x.end()

using namespace std;
using ll = int64_t;

const ll MOD = 998244353;

ll ceil(ll a, ll b) {return a % b == 0 ? a / b : a / b + 1;}

ll N;
map<ll, ll> memo;

long long binpow(long long a, long long b) {
    a %= MOD;
    long long res = 1;
    while(b > 0) {
        if(b & 1)
            res = res * a % MOD;
        a = a * a % MOD;
        b >>= 1;
    }
    return res;
}

ll dp(ll n) {
    if(memo.count(n)) return memo[n];
    if(n == 1) return memo[1] = 1;
    for(int i=2; i<=6; i++) {
        if(n % i) continue;
        memo[n] += dp(n / i) * binpow(5, MOD - 2); // fermat's little theorem
        memo[n] %= MOD;
    }
    return memo[n];
}

void solve() {
    cin>>N; 
    cout<<dp(N)<<"\n";
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
