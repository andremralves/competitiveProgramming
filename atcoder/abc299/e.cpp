/**
 *    author: mralves 
 *    created: 22-04-2023 09:03:47       
**/
#include <bits/stdc++.h>

using namespace std;
#define pb(x) push_back(x)
#define all(x) x.begin(),x.end()
using ll = int64_t;
ll ceil(ll a, ll b) {return a % b == 0 ? a / b : a / b + 1;}

void solve() {
    int n, m;
    cin>>n>>m;
    vector<vector<int>> adj(n+1);
    vector<int> col(n+1, 1);
    vector<vector<int>> mi(n+1, vector<int>(n+1));
    for(int i=0; i<m; i++) {
        int x,y;
        cin>>x>>y;
        adj[x].push_back(y);
        adj[y].push_back(x);
    }


    for(int i=1; i<=n; i++) {
        vector<int> vis(n+1, 0);
        queue<int> que;
        que.push(i);
        int depth = 1;
        while(!que.empty()) {
            int cur = que.front();
            vis[cur] = 1;
            que.pop();
            for(auto x: adj[cur]) {
                if(!vis[cur])
                    que.push(x);
            }
        }
    }
}

int main ()
{
    solve();    
    return 0;
}
