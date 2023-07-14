/**
 *    author: mralves 
 *    created: 01-07-2023 01:46:12       
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

    vector<vector<int>> adj(n);
    for(int i=0; i<m; i++) {
        int u, v;
        cin>>u>>v;
        u--, v--;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    vector<int> used(n);
    auto dfs = [&](auto &&dfs, int u, int p) -> void {
        if(used[u]) return;
        used[u] = true;
        for(auto v : adj[u]) {
            dfs(dfs, v, u);
        }
    };

    vector<ii> ans;
    vector<int> tmp;
    for(int i=0; i<n; i++) {
        if(!used[i]) {
            tmp.push_back(i);
            dfs(dfs, i, -1);
        }
    }
    for(int i=1; i<(int)tmp.size(); i++) {
        ans.emplace_back(tmp[i-1], tmp[i]);
    }
    cout<<ans.size()<<"\n";
    for(auto [u, v]:ans) {
        cout<<u+1<<" "<<v+1<<"\n";
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
