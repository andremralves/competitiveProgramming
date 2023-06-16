/**
 *    author: mralves 
 *    created: 15-06-2023 23:08:34       
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
    int n, m;
    cin>>n>>m;

    vector<int> a(n*m);
    for(int i=0; i<m*n; i++) {
        cin>>a[i];
    }

    sort(all(a));

    vector<int> v4(4);
    v4[0] = a[0];
    v4[1] = a[1];
    v4[2] = a[n*m-1];
    v4[3] = a[n*m-2];

    ll ans = 0;
    do {
        ll x = (n-1) * ((max(v4[0], v4[1])-min(v4[0], v4[1])));
        ll y = (m-1) * ((max(v4[0], v4[2])-min(v4[0], v4[2])));
        ll z = (n*m-m-n+1) * ((*max_element(all(v4)) - *min_element(all(v4))));
        ans = max(ans, x+y+z);
    } while(next_permutation(all(v4)));
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
