/**
 *    author: mralves 
 *    created: 23-09-2023 09:08:14       
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
    ll n, m, p;
    cin>>n>>m>>p;

    vector<ll> a(n), b(m);
    for(int i=0; i<n; i++) {
        cin>>a[i];
    }
    for(int i=0; i<m; i++) {
        cin>>b[i];
    }

    sort(all(a));
    sort(all(b));

    ll ans = 0;
    for(int i=0; i<n; i++) {
        int up = upper_bound(all(b), p-a[i])-b.begin();
        ans += a[i]*up;
        ans += (m-up)*p;
    }
    for(int i=0; i<m; i++) {
        int up = upper_bound(all(a), p-b[i])-a.begin();
        ans += b[i]*up;
    }
    cout<<ans<<"\n";
}

int main ()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int t = 1;
    while (t--) solve();
    return 0;
}
