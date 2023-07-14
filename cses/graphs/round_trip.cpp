/**
 *    author: mralves 
 *    created: 24-05-2023 00:24:13       
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
        --u; --v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    vector<bool> used(n);
    vector<int> path;
    auto dfs = [&](int pos, int parent, auto &&dfs) -> bool {
        used[pos] = true;
        path.push_back(pos);
        for(auto u : adj[pos]) {
            if(!used[u]) {
                if(dfs(u, pos, dfs)) {
                    return true; 
                }
            } else if(u != parent) {
                path.push_back(u);
                return true; 
            }
        }
        path.pop_back();
        return false;
    };

    for(int i=0; i<n; i++) {
        if(used[i]) continue;
        if(dfs(i, -1, dfs)) {
            int last = path.back();
            auto it = find(all(path), last);
            cout<<path.end()-it<<"\n";
            for(; it != path.end(); it++) {
                cout<<*it+1<<" ";
            }
            cout<<"\n";
            return;
        }
    }
    cout<<"IMPOSSIBLE\n";
}

int main ()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int t = 1;
    while (t--) solve();
    return 0;
}
