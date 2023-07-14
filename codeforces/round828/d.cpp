#include <bits/stdc++.h>

using namespace std;
using ll = long long;

void solve() {
    int n;
    cin>>n;
    vector<ll> a(n);
    ll base2 = 1;
    ll mult = 1;
    for (ll i = 0; i < n; i++) {
        cin>>a[i];
        base2*=2; 
        mult = mult *a[i];
    }
    ll ans = 0;
    //for (ll i = 0; i < n; i++) {
    //    mult = mult * (i+1);
    //    if(mult%base2 == 0) break;
    //}
    cout<<mult<<"\n";
    cout<<base2<<"\n";
    cout<<mult%base2<<"\n";
    cout<<"------------------"<<"\n";
}

int main (int argc, char *argv[])
{
    int t; 
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
