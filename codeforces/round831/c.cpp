#include <bits/stdc++.h>

using namespace std;
using ll = int64_t;

void solve() {
    int n;
    cin>>n;
    vector<ll> a(n);
    for(ll i=0; i<n; i++) cin >> a[i];
    sort(a.begin(), a.end());
    
    ll ans = 0;
    for(ll it=0; it<2; it++) {
        for(ll i = 2; i<n; i++) {
            ans = max(ans, abs(a[0] - a[i]) + abs(a[i] - a[i-1]));
        }
        reverse(a.begin(), a.end());
    }
    cout<<ans<<endl;
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
