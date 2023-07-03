/**
 *    author: mralves 
 *    created: 02-07-2023 11:33:23       
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
    int n, x;
    cin>>n>>x;

    map<int, int> mp;
    bool ok = false;
    ii ans;
    for(int i=0; i<n; i++) {
        int v; cin>>v;
        if(mp.count(x-v)) {
            ok = true;
            ans = {i+1, mp[x-v]};
        }
        mp.emplace(v, i+1);
    }

    if(ok) {
        cout<<ans.first<<" "<<ans.second<<"\n";
    } else {
        cout<<"IMPOSSIBLE\n";
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
