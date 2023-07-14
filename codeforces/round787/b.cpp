/**
 *    author: mralves 
 *    created: 26-11-2022 22:11:31       
**/
#include <bits/stdc++.h>

using namespace std;
using ll = int64_t;

void solve() {
    int n;
    cin>>n;
    vector<ll> a(n);
    for (int i = 0; i < n; i++) {
        cin>>a[i];
    }
    ll ans = 0;
    for (int i = n-1; i >= 0; i--) {
        for (int j = i+1; j < n; j++) {
            if(a[j] < j) {
                cout<<"-1\n";
                return;
            }
            if(a[i] >= a[j]) {
                while (a[i] >= a[j])
                {
                    ans++;
                    a[i]/=2;
                }
            }
        } 
    }
    cout<<ans<<"\n";
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
