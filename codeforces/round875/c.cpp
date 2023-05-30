/*
 *    author: mralves 
 *    created: 28-05-2023 22:41:44       
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
    int n;
    cin>>n;
    vector<vector<ii>> adj(n+1);
    vector<int> id(n), dp(n);
    id[0] = n;
    for(int i=0; i<n-1; i++) {
        int u, v;
        cin>>u>>v;
        u--, v--;
        adj[u].emplace_back(v, i);
        adj[v].emplace_back(u, i);
    }

    function<void(int, int)> dfs = [&](int u, int p) {
        for(auto [v, i] : adj[u]) {
            if(v == p) {
                continue;
            }
            id[v] = i;
            dp[v] = dp[u] + (i < id[u]);
            dfs(v, u);
        }
    };
    dfs(0, -1);

    auto ans = *max_element(all(dp));
    cout<<ans<<"\n";
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
