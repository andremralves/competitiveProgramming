/**
 *    author: mralves 
 *    created: 16-05-2023 02:41:51       
**/
#include <bits/stdc++.h>

#define pb(x) push_back(x)
#define all(x) x.begin(),x.end()

using namespace std;
using ll = int64_t;
long long binpow(long long a, long long b, long long MOD) {
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

ll ceil(ll a, ll b) {return a % b == 0 ? a / b : a / b + 1;}

void solve() {
    ll p;
    cin>>p;
    ll ans = 0;
    for(ll i=1; i<p; i++) {
        bool ok = true;
        if((binpow(i, p-1, p)-1)%p != 0) {
            ok = false;
        }
        for(ll j=1; j<p-1; j++) {
            if(!ok) break;
            if((binpow(i, j, p) - 1)%p == 0) {
                ok = false;
                break;
            }
        }
        if(ok) {
            ans++;
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
