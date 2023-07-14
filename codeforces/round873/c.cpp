/**
 *    author: mralves 
 *    created: 14-05-2023 11:34:41       
**/
#include <bits/stdc++.h>

#define pb(x) push_back(x)
#define all(x) x.begin(),x.end()

using namespace std;
using ll = int64_t;

ll ceil(ll a, ll b) {return a % b == 0 ? a / b : a / b + 1;}

const ll MOD = 1e9+7;

void solve() {
    int n;
    cin>>n;
    vector<int> a(n), b(n);
    for(int i=0; i<n; i++) cin>>a[i];
    for(int i=0; i<n; i++) cin>>b[i];

    sort(all(a));
    sort(all(b));

    int j = 0;
    ll ans = 1;
    for(int i=0; i<n; i++) {
        while(j < n and b[j] < a[i]) {
            j++; 
        }
        ans = ans * (ll)(j-i) % MOD;
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
