/**
 *    author: mralves 
 *    created: 07-01-2023 08:59:51       
**/
#include <bits/stdc++.h>

using namespace std;
using ll = int64_t;

map<int , vector<int>> g;
vector<int> visited(101, 0);
int ans = 0;
void dfs(int s) {
    visited[s] = 1;
    for(auto v : g[s]) {
        if(!visited[v]) {
            dfs(v);
        }
    }
}

int main ()
{
    int n, m;
    cin>>n>>m;
    for(int i=0;i<m; i++) {
        int u, v;
        cin>>u>>v;
        g[u].push_back(v);
        g[v].push_back(u);
    }
    for(int i=1; i<=n; i++) {
        if(!visited[i]) {
            ans++;
            dfs(i);
        }
    }
    cout<<ans<<"\n";
    return 0;
}
