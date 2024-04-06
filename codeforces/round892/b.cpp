/**
 *    author: mralves 
 *    created: 12-08-2023 11:35:10       
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

    ll ans = 0;
    ll mi = -1;
    int pos = -1;
    ll first = 1e9+10;
    vector<vector<ll>> vvs(n);
    for(int i=0; i<n; i++) {
        int m;
        cin>>m;
        for(int j=0; j<m; j++) {
            ll x;
            cin>>x;
            vvs[i].push_back(x);
        }
        sort(all(vvs[i]));

        if(mi == -1 or mi > vvs[i][1]) {
            pos = i;
            mi = vvs[i][1];
        }
        first = min(first, vvs[i][0]);
    }

    for(int i=0; i<n; i++) {
        if(i == pos) {
            ans += first;
        } else {
            ans += vvs[i][1];
        }
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
