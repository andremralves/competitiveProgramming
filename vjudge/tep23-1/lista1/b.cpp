/**
 *    author: mralves 
 *    created: 09-04-2023 11:14:34       
**/
#include <bits/stdc++.h>

#define pb(x) push_back(x)

using namespace std;
using ll = int64_t;

ll ceil(ll a, ll b) {return a % b == 0 ? a / b : a / b + 1;}

void solve() {
    ll n, k;
    cin>>n>>k;
    vector<ll> a(n);
    ll bits[64][2] = {};
    for(int i=0; i<n; i++) {
        cin>>a[i];
    }

    for(ll i=0; i<a.size(); i++) {
        for(ll j=0; j<64; j++) {
            bits[j][a[i] >> j & 1]++;
        }
    }
    
    ll x = 0;
    for(ll i=60; i>=0; i--) {
        if(bits[i][0] > bits[i][1] and (x | 1ll<<i) <= k) {
            x |= 1ll << i;
        }
    }

    ll sum = 0;
    for(int i=0; i<n; i++) {
        sum += x ^ a[i];
    }

    cout<<sum<<"\n";
    
}

int main ()
{
    solve();    
    return 0;
}
