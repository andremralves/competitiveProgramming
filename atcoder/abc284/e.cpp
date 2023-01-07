/**
 *    author: mralves 
 *    created: 07-01-2023 08:59:51       
**/
#include <bits/stdc++.h>

#define pb(x) push_back(x)

using namespace std;
using ll = int64_t;

const int N = 1e6;

map<int , vector<int>> g;
int ans = 0;
// init 0
int visited[N] = {};
void dfs(int s) {
    if(ans >= N) {
        return;
    }
    visited[s] = 1;
    ans++;
    for(auto v : g[s]) {
        if(not visited[v])
            dfs(v);
    }
    visited[s] = 0;
}

int main ()
{
    int n, m;
    cin>>n>>m;
    for(int i=0;i<m; i++) {
        int u, v;
        cin>>u>>v;
        g[u].pb(v);
        g[v].pb(u);
    }
    dfs(1);
    cout<<ans<<"\n";
    return 0;
}
