/**
 *    author: mralves 
 *    created: 21-11-2022 11:35:35       
**/
#include <algorithm>
#include <bits/stdc++.h>

using namespace std;
using ll = int64_t;

void solve() {
    ll n,c,d;
    cin>>n>>c>>d;
    vector<ll> a(n);
    for (ll i = 0; i < n; i++) {
        cin>>a[i];
    }
    sort(a.begin(), a.end());
    reverse(a.begin(), a.end());

    if(a[0] > c) {
        cout<<"Infinity"<<"\n";
        return;
    }
    for (ll k = d; k >= 1; k--) {
        ll sum = 0;
        //cout<<"ok"<<"\n";
        ll j = 0;
        while (j<d)
        {
            for (ll i = 0; i < n && i < k; i++) {
                if(j > d) break;
                sum+=a[i];
                j++;
            }
            if(sum>c) {
                cout<<k<<"\n";
                return;
            }
        }
    }
    cout<<"Impossible"<<"\n";
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
