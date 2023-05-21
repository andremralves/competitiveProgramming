/**
 *    author: mralves 
 *    created: 20-05-2023 09:08:23       
**/
#include <bits/stdc++.h>

#define pb(x) push_back(x)
#define all(x) x.begin(),x.end()

using namespace std;
using ll = int64_t;

ll ceil(ll a, ll b) {return a % b == 0 ? a / b : a / b + 1;}

void solve2() {
    ll n, m, d;
    cin>>n>>m>>d;
    vector<ll> a(n), b(m);
    for(int i=0; i<n; i++) cin>>a[i];
    for(int i=0; i<m; i++) cin>>b[i];

    sort(all(a));
    sort(all(b));

    ll ans = -1;
    for(int i=0; i<n; i++) {
        auto it = upper_bound(all(b), a[i]+d);
        ll x = *(it-1);
        if(abs(a[i] - x) <= d)
            ans = max(ans, a[i] + x);
    }
    cout<<ans<<"\n";
}

int main ()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int t = 1;
    //cin>>t;
    while (t--) solve2();
    return 0;
}
