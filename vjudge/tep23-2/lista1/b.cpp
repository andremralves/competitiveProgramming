#include <bits/stdc++.h>

using namespace std;

int main() {
    int N, M;
    cin>>N>>M;

    vector<vector<int>> g(N);
    for(int i= 0; i<M; i++) {
        int a, b;
        cin>>a>>b;
        a--, b--;
        g[a].push_back(b);
        g[b].push_back(a);
    }

    vector<int> que;
    que.push_back(0);
    vector<int> vis(N, -1);
    vis[0] = 0;
    auto dfs = [&](int pos, int p, auto && dfs) {
        if(vis[pos] != -1) return;
        if(p != -1) {
            vis[pos] = vis[p]+1;
        } else {
            vis[pos] = 0;
        }

        for(auto x: g[pos]) {
            if(vis[x] == -1) {
                dfs(x, pos, dfs);
            }
        }
    };
    dfs(0, -1, dfs);
    cout<<vis[N-1]<<"\n";
    if(vis[N-1] == 2) {
        cout<<"POSSIBLE\n";
    } else {
        cout<<"IMPOSSIBLE\n";
    }
    return 0;
}
