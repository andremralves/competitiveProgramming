/**
 *    author: mralves 
 *    created: 21-11-2022 11:35:35       
**/
#include <algorithm>
#include <bits/stdc++.h>

using namespace std;
using ll = int64_t;

void solve() {
    ll n;
    cin>>n;
    vector<ll> a(n);
    vector<ll> b(n);
    for (ll i = 0; i < n; i++) {
        cin>>a[i];
    }
    b = a;
    sort(a.begin(), a.end());
    for (ll i = 0; i < n; i++) {
        if(b[i] == a[n-1]) {
            cout<<b[i]-a[n-2]<<" ";
        } else {
            cout<<b[i]-a[n-1]<<" ";
        }
    }
    cout<<"\n";
}

int main (int argc, char *argv[])
{
    int t;
    cin>>t;
    while (t--)
    {
        solve();    
    }
    return 0;
}
