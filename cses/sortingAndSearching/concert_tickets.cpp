/**
 *    author: mralves 
 *    created: 27-06-2023 15:17:47       
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

    multiset<int> h;
    vector<int> t(m);
    for(int i=0; i<n; i++) {
        int x; cin>>x;
        h.insert(x);
    }

    for(int i=0; i<m; i++) {
        int x; cin>>x;
        auto it = h.lower_bound(x);
        int ans = -1;
        if(it == h.begin()) {
            if(*it == x) ans = x;
        } else if(it == h.end()) {
            it--;
            ans = *it;
        } else if(*it == x){
            ans = *it; 
        } else {
            it--;
            ans = *it;
        }

        cout<<ans<<"\n";
        if(ans != -1) h.erase(it);
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
