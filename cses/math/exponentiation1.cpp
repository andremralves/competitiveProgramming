#include <bits/stdc++.h>

using namespace std;
using ll = int64_t;

int MOD = 1e9+7;

ll binpow(ll x, ll n, ll m) {
    x %= m;
    ll res = 1;
    while(n > 0) {
        if(n%2 == 1) {res = res * x % m;}
        x = x * x % m;
        n /= 2; 
    }
    return res;
}

int main() {
    int t; cin>>t;
    while(t--) {
        ll a, b;
        cin>>a>>b;
        cout<<binpow(a, b, MOD)<<"\n";
    }
    return 0;
}

// 10
// 1010

