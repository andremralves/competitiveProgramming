/**
 *    author: mralves 
 *    created: 06-06-2023 11:35:40       
**/
#include <bits/stdc++.h>

#define pb(x) push_back(x)
#define all(x) x.begin(),x.end()

using namespace std;
using ll = int64_t;
using ii = pair<int, int>;

ll ceil(ll a, ll b) {return a % b == 0 ? a / b : a / b + 1;}
vector<ii> dir4 = {{1, 0}, {0, 1}, {-1, 0}, {0, -1}};
vector<ii> dir8 = {{1, 0}, {1, 1}, {0, 1}, {-1, 1}, {-1, 0}, {-1, -1}, {0, -1}, {1, -1}};

void solve() {
    ll n,k,q;
    cin>>n>>k>>q;
    vector<ll> a(n);
    for(ll i=0; i<n; i++) {
        cin>>a[i];
    }
    ll ans = 0;
    for(ll i=0; i<n; i++) {
        ll j = i;
        int cnt = 1;
        while(j < n and a[j] <= q) {
            j++;
            if(j-i >= k) {
                ans += cnt;
                cnt++;
            }
        }
        i = j;
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
