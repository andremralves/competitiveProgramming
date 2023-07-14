/**
 *    author: mralves 
 *    created: 30-12-2022 11:34:02       
**/
#include <bits/stdc++.h>

using namespace std;
using ll = int64_t;

void solve() {
    int n;
    cin>>n;
    vector<ll> a(n);
    for(int i=0; i<n; i++) {
        cin>>a[i];
    }

    ll ans = 0;
    for(int i= 0; i<n; i++) {
        ans = __gcd(ans, a[i]);
    }
    cout<<ans<<"\n";
    fill()
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
