/**
 *    author: mralves 
 *    created: 11-02-2023 09:36:39       
**/
#include <bits/stdc++.h>

#define pb(x) push_back(x)

using namespace std;
using ll = int64_t;

void solve() {

}

int main ()
{
    int n, m;
    cin>>n>>m;
    vector<vector<int>> g(n+1);
    vector<int> vis(n+1, 0);
    for(int i=0; i<m; i++) {
        int x;
        cin>>x;
        g[x].push_back(x);
        g[x].push_back(x+1);
    }

    queue<int> que;
    for(int i=1; i<=n; i++) {
        if(vis[i]) continue;
        vector<int> a;
        que.push(i);
        vis[que.front()] = 1;
        while(!que.empty()) {
            int fr = que.front();
            a.push_back(fr);
            que.pop();
            for(auto item: g[fr]) {
                if(!vis[item]) {
                    vis[item] = 1;
                    que.push(item);
                }
            }
        }
        sort(a.begin(), a.end());
        reverse(a.begin(), a.end());
        for(int j=0; j<a.size();j++) {
            cout<<a[j]<<" ";
        }
    }
    cout<<"\n";

    return 0;
}
