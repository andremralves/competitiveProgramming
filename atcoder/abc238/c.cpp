/**
 *    author: mralves 
 *    created: 19-05-2023 23:19:49       
**/
#include <bits/stdc++.h>

#define pb(x) push_back(x)
#define all(x) x.begin(),x.end()

using namespace std;
using ll = int64_t;

ll ceil(ll a, ll b) {return a % b == 0 ? a / b : a / b + 1;}

ll const mod = 998244353;

ll const INV2 = 499122177;

void solve() {
    ll n;
    cin>>n;
    ll x = 10;
    ll sum = 0;
    while(n/x > 0) {
        ll f = x/10;
        ll oc = x;
        ll b = x - f;
        ll res = b;
        res *= (1+b); res %= mod;
        res *= INV2; res %= mod;
        sum += res; sum %= mod;
        x *= 10;
    }
    ll b = n - x/10 + 1;
    ll res = b;
    res *= (1+b); res %= mod;
    res *= INV2; res %= mod;
    sum += res; sum %= mod;
    cout<<sum<<"\n";
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

