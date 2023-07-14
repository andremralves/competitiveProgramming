/**
 *    author: mralves 
 *    created: 27-06-2023 12:46:54       
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
    ll x, y;
    cin>>n>>x>>y;
    vector<vector<ll>> mat(n, vector<ll>(n));
    for(int i=0; i<n; i++) {
        for(int j=0; j<n; j++)
            cin>>mat[i][j];
    }

    ll buf = n;
    vector<ll> sizes;
    while(buf < x or buf < y) {
        sizes.push_back(buf);
        buf *= 2;
    }
    reverse(all(sizes));
    ll ans = 0;
    for(int i=0; i<(int)sizes.size(); i++) {
        ll s = sizes[i];
        if(x>s and y>s) {
            x-=s; y-=s;
        } else if(x>s and y<=s) {
            ans += s;
            x-=s;
        } else if(x<=s and y>s) {
            ans += s;
            y-=s;
        }     
    }
    ans += mat[x-1][y-1];

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
