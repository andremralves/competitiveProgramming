/**
 *    author: mralves 
 *    created: 10-06-2023 08:44:28       
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
    int N, M, K;
    cin>>N>>M>>K;
    vector<vector<int>> adj(N);
    for(int i=0; i<M; i++) {
        int u, v;
        cin>>u>>v;
        u--; v--;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    map<int, int> mp;
    for(int i=0; i<K; i++) {
        int p, h; 
        cin>>p>>h;
        p--;
        mp[p] = h;
    }

    set<int> ans;
    for(int j=0; j<N; j++) {
        queue<int> que;
        vector<bool> used(N, 0);
        vector<int> dis(N);
        que.push(j);
        dis[j] = 0;
        while(!que.empty()) {
            int u = que.front();
            que.pop();
            if(mp.count(u) and dis[u] <= mp[u]) {
                ans.insert(j);
                break;
            }

            for(auto v : adj[u]) {
                if(!used[v]) {
                    used[v] = true;
                    que.push(v);
                    dis[v] = dis[u] + 1;
                }
            }
        }
    }
    cout<<ans.size()<<"\n";
    for(auto x : ans) {
        cout<<x+1<<" ";
    }
    cout<<"\n";
}

int main ()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int t = 1;
    while (t--) solve();
    return 0;
}
