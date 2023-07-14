/**
 *    author: mralves 
 *    created: 02-05-2023 00:53:22       
**/
#include <bits/stdc++.h>

#define pb(x) push_back(x)
#define all(x) x.begin(),x.end()

using namespace std;
using ll = int64_t;

const ll MOD = 1<<31;

ll ceil(ll a, ll b) {return a % b == 0 ? a / b : a / b + 1;}

ll binpow(ll a, ll b) {
    a %= MOD;
    ll res = 1;
    while(b > 0) {
        if(b & 1)
            res = res * a % MOD;
        a *= a % MOD;
        b >>= 1;
    }
    return res;
}

void solve() {
    ll x;
    while(cin>>x) {
        string line;
        cin.ignore();
        getline(cin, line);
        stringstream ss;
        ss << line;
        ll val;
        vector<ll> a;
        while(ss>>val) {
            a.push_back(val);
        }

        ll ans = 0;
        ll n = a.size()-1;
        for(auto val: a) {
            if(n > 0) {
                ans += (val*(n*binpow(x,n-1))%MOD)%MOD;
            }
            n--;
        }
        cout<<ans<<"\n";
    }
}

int main ()
{
    //std::ios::sync_with_stdio(false);
    //std::cin.tie(nullptr);

    int t = 1;
    //cin>>t;
    while (t--) solve();
    return 0;
}
