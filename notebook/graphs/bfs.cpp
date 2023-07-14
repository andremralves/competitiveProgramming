#include <bits/stdc++.h>

using namespace std;

int main() {
    vector<vector<int>> adj;
    int n; int s; // nodes and source

    queue<int> q;
    vector<bool> used(n);
    vector<int> d(n, 0), p(n); // distance and parents

    q.push(s);
    used[s] = true;
    p[s] = -1; // root
    d[s] = 0;
    while(!q.empty()) {
        int v = q.front();
        q.pop();
        for(auto u : adj[v]) {
            if(!used[u]) {
                q.push(u);
                used[u] = true;
                p[u] = v;
                d[u] = ++d[v];
            }
        }
    }
    
    // showing the shortest path
    int u;
    if(!used[u]) {
        cout<<"No path!\n";
    } else {
        vector<int> path;
        for(int v=u; v != -1; v=p[v])
            path.push_back(v);
        reverse(path.begin(), path.end());
        for(int v: path)
            cout<<v<<" ";
    }
    return 0;
}
