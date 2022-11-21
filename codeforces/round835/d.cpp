/**
 *    author: mralves 
 *    created: 21-11-2022 11:35:35       
**/
#include <bits/stdc++.h>

using namespace std;
using ll = int64_t;

void solve() {
    ll n;
    cin>>n;
    vector<ll> a(n);
    for (ll i = 0; i < n; i++) {
        cin>>a[i];
    }

    //if(a.size() == 1) {
    //    cout<<"YES"<<"\n";
    //    return;
    //}
    int cnt = 0;
    for (ll l = 0; l < n; l++) {
        ll r;
        for (r = l; r < n && a[l]==a[r]; r++) {}
        r = r-1;
        if((l == 0 or a[l-1] > a[l]) and (r == n-1 or a[r+1] > a[r])) {
            //cout<<" ok1";
            cnt++;
            if(cnt > 1) {
                cout<<"NO"<<"\n";
                return;
            }
        }
        l = r;
        //cout<<"\n";
    }
    cout<<"YES"<<"\n";
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
