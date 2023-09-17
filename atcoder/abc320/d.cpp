/**
 *    author: mralves 
 *    created: 16-09-2023 09:00:23       
**/
#include <bits/stdc++.h>

#define pb(x) push_back(x)
#define all(x) x.begin(),x.end()

#define int long long  
using namespace std;
using ll = int64_t;
using ii = pair<int, int>;

ll ceil(ll a, ll b) {return a % b == 0 ? a / b : a / b + 1;}
vector<ii> dir4 = {{1, 0}, {0, 1}, {-1, 0}, {0, -1}};
vector<ii> dir8 = {{1, 0}, {1, 1}, {0, 1}, {-1, 1}, {-1, 0}, {-1, -1}, {0, -1}, {1, -1}};

void solve() {
    int N, M;
    cin>>N>>M;
    
    vector<vector<pair<int, pair<ll, ll>>>> adj(N);
    for(int i=0; i<M; i++) {
        int a, b, x, y;
        cin>>a>>b>>x>>y;
        a--, b--;
        adj[a].push_back({ b, {x, y}});
        adj[b].push_back({ a, {-x, -y}});
    }

    vector<bool> used(N);
    vector<pair<ll, ll>> ps(N);
    auto dfs = [&](int pos, int p, pair<ll, ll> dis, auto &&dfs) {
        if(used[pos]) return;
        used[pos] = true;
        if(p != -1) {
            ps[pos].first = ps[p].first + dis.first;
            ps[pos].second = ps[p].second + dis.second;
        }
        for(auto j: adj[pos]) {
            dfs(j.first, pos, j.second, dfs);
        }
    };

    dfs(0, -1, {},  dfs);

    for(int i=0; i<N; i++) {
        if(!used[i]) {
            cout<<"undecidable\n";
        } else {
            cout<<ps[i].first<<" "<<ps[i].second<<"\n";
        }
    }

}

int32_t main ()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int t = 1;
    while (t--) solve();
    return 0;
}
