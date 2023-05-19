/**
 *    author: mralves 
 *    created: 15-05-2023 02:38:21       
**/
#include <bits/stdc++.h>

#define pb(x) push_back(x)
#define all(x) x.begin(),x.end()

using namespace std;
using ll = int64_t;

ll ceil(ll a, ll b) {return a % b == 0 ? a / b : a / b + 1;}

void solve() {
    int n, k;
    cin>>n>>k;
    vector<ll> a(n);
    for(int i = 0; i<n; i++) cin>>a[i];
    sort(all(a));
    
    vector<ll> psum(n+1, 0);
    for(int i=0; i<n; i++) {
        psum[i+1] = a[i] + psum[i];
    }

    ll ans = 0;
    for(int i=0; i<=k; i++) {
        ans = max(ans, psum[n-(k-i)]-psum[2*i]);
    }
    cout<<ans<<"\n";
}

int main ()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int t = 1;
    cin>>t;
    while (t--) solve();
    return 0;
}
