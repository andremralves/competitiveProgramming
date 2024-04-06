/**
 *    author: mralves 
 *    created: 22-09-2023 21:34:48       
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
    ll n, x;
    cin>>n>>x;

    vector<ll> a(n);
    for(int i=0; i<n; i++) {
        cin>>a[i];
    }

    ll l=1, r = 2e9+5;
    l--, r++;
    while(r-l > 1) {
        ll m = midpoint(l, r);

        ll w = 0;
        for(int i=0; i<n; i++) {
            w+=max(m-a[i], (ll)0);
        }
        if(w<=x) {
            l = m;
        } else {
            r = m;
        }
    }
    cout<<l<<"\n";
    

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
