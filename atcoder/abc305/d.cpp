/**
 *    author: mralves 
 *    created: 10-06-2023 08:44:28       
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
    int n;
    cin>>n;
    vector<ll> a(n);
    for(int i=0; i<n; i++) {
        cin>>a[i];
    }

    vector<ll> psum(n+1);
    for(int i=0; i<n; i++) {
        if((i+1)%2 and i>0)
            psum[i+1] = a[i]-a[i-1] + psum[i];
        else 
            psum[i+1] = psum[i];
    }

    int q; cin>>q;
    while(q--) {
        int l, r;
        cin>>l>>r;
        int lw = lower_bound(all(a), l) - a.begin();
        int rr = lower_bound(all(a), r) - a.begin();
        ll x = 0, y = 0;
        if(lw%2==0)
            x = a[lw] - l;
        if(rr%2==0)
            y = a[rr] - r;
        ll ans = psum[rr+1]-psum[lw+1]+x-y;
        cout<<ans<<"\n";
    }

}

int main ()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int t = 1;
    while (t--) solve();
    return 0;
}
