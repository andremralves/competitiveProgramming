/**
 *    author: mralves 
 *    created: 19-05-2023 11:36:25       
**/
#include <bits/stdc++.h>

#define pb(x) push_back(x)
#define all(x) x.begin(),x.end()

using namespace std;
using ll = int64_t;

ll ceil(ll a, ll b) {return a % b == 0 ? a / b : a / b + 1;}

/*
    6
    5 1 4 3 4 2

    1-5
    2-1
    3-4
    4-3
    5-4
    6-2
*/

void solve() {
    int n; 
    cin>>n;
    vector<set<int>> adj(n);
    for(int i=0; i<n; i++) {
        int x;
        cin>>x;
        x--;
        adj[i].insert(x);
        adj[x].insert(i);
    }

    vector<bool> used(n, 0);
    auto dfs = [&](int pos, int p, auto &&dfs) -> bool {
        used[pos] = true;
        for(auto u : adj[pos]) {
            if(!used[u]) {
                if(dfs(u, pos, dfs)) return true;
            } else if(u != p) {
                return true;
            }
        }
        return false;
    };

    int chains = 0, cycles = 0;
    for(int i=0; i<n; i++) {
        if(used[i]) continue;
        if(dfs(i, -1, dfs)) {
            cycles++;
        } else {
            chains++;
        }
    }
    cout<<cycles + (bool)chains<<" "<<chains+cycles<<"\n";
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
