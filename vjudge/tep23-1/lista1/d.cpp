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
    ll l, r;
    cin>>l>>r;
    ll a = l, b = r;
    ll mask = 1ll;
    while(mask > 0) {
        if((~mask & b) >= l and ((~mask & b) ^ a) > (a^b)) {
            b &= ~mask; 
        }
        mask <<= 1; 
    }
    mask = 1ll<<60;
    while(mask) {
        if((mask | a) <= r and ((mask | a) ^ b) > (a^b)) {
            a |= mask; 
        }
        mask >>= 1; 
    }
    cout<<"a: "<<a<<"\n";
    cout<<"b: "<<b<<"\n";
    cout<<(a^b)<<"\n";
}

int main ()
{
    solve();    
    return 0;
}
