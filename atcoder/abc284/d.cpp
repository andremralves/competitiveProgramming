/**
 *    author: mralves 
 *    created: 07-01-2023 08:59:51       
**/
#include <bits/stdc++.h>

using namespace std;
using ll = int64_t;

void solve() {
    ll n;
    cin>>n;
    ll p, q;
    for(ll i=2; i*i<=n; i++) {
        if(n%i != 0) continue;
        if(n%(i*i) == 0) {
            p = i;
            q = n/(p*p);
        } else {
            q = i;
            p = sqrt(n/q);
        }
        break;
    }
    cout<<p<<" "<<q<<"\n";
}

int main ()
{
    int t;
    cin>>t;
    while (t--)
    {
        solve();    
    }
    return 0;
}
