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

int tree_h(ll n) {
    int h = 0;
    while(n>>=1) h++;
    return h;
}

void solve() {
    ll n, x, k;
    cin>>n>>x>>k;

    int h = tree_h(n);
    
    int x_lev = tree_h(x);

    // down
    int cur = x;
    ll ans = 0;
    while(cur >= 1) {
        if(cur+k <= h) {
             
        }
        cur>>=1; k--;
    }

    for(int i=0; i<n; i++) {
    }
     


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
