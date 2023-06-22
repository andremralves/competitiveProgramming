/**
 *    author: mralves 
 *    created: 20-06-2023 11:35:06       
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
    int n, q;
    cin>>n;
    vector<vector<int>> adj(n);
    for(int i=0; i<n-1; i++) {
        int u, v;
        cin>>u>>v;
        u--, v--;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    vector<int> ends(n, 0);
    auto dfs = [&](int u, int p, auto && dfs) -> void {
        if(p != -1 and adj[u].size() == 1) {
            ends[u] = 1;
        }
        for (int v : adj[u])
            if (v != p) {
                dfs(v, u, dfs);
                ends[u] += ends[v];
            } 
    };
    dfs(0, -1, dfs);

    cin>>q;
    while(q--) {
        int x, y;
        cin>>x>>y;
        x--, y--;
        cout<<(ll)ends[x]*ends[y]<<"\n";
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
