#include <bits/stdc++.h>

using namespace std;

vector<int> visited(10e5+5);
void dfs(int pos, vector<vector<int>> &adj) {
    if(visited[pos]) return;
    visited[pos] = 1;
    for(auto item: adj[pos]) {
        if(!visited[item]) {
            dfs(item, adj);
        }
    }
}

int main() {
    int n, m;
    cin>>n>>m;
    vector<vector<int>> adj(n+1);
    for(int i=0; i<m; i++) {
        int a, b;
        cin>>a>>b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }

    int cnt = 0;
    for(int i=1; i<=n; i++) {
        if(!visited[i]) {
            dfs(i, adj);
            cnt++;
        }
    }
    cout<<m-n+cnt<<"\n";
    return 0;
}

