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
    //ll c1 =0, c0=0;
    ll first0 = -1, last1 = -1;
    for (ll i = 0; i < n; i++) {
        cin>>a[i];
        if(a[i] == 0) {
            if(first0 == -1) first0 = i;
        } else 
            last1 = i;
    }

    //if(a[0] == 0 and a[n-1] == 1) {
    //    if(c0 > c1) a[0] = 1;
    //    else a[n-1] = 0;
    //} else if(a[0] == 0) {
    //    a[0] = 1;
    //} else if(a[n-1] == 1) {
    //    a[n-1] = 0;
    //}

    ll cnt = 0;
    ll ans = 0;
    for (ll i = n-1; i >= 0; i--) {
        if(i == last1) {
            cnt++;
        } else if(a[i] == 0) cnt++;
        else {
            ans+=cnt;
        }
    }
    ll cnt2 = 0;
    ll ans2 = 0;
    for (ll i = n-1; i >= 0; i--) {
        if(i == first0) ans2+=cnt2;
        else if(a[i] == 0) cnt2++;
        else ans2+=cnt2;
    }
    ll cnt3 = 0;
    ll ans3 = 0;
    for (ll i = n-1; i >= 0; i--) {
        if(a[i] == 0) cnt3++;
        else ans3+=cnt3;
    }
    ll m = max(ans, ans2);
    cout<<max(m, ans3)<<"\n";
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
