/**
 *    author: mralves 
 *    created: 10-11-2023 16:06:06       
**/
#include <bits/stdc++.h>

#define pb(x) push_back(x)
#define all(x) x.begin(),x.end()
#define int long long

using namespace std;
using ll = int64_t;
using pii = pair<int, int>;

const int INF = 1e12+5;

ll ceil(ll a, ll b) {return a % b == 0 ? a / b : a / b + 1;}
vector<pii> dir4 = {{1, 0}, {0, 1}, {-1, 0}, {0, -1}};
vector<pii> dir8 = {{1, 0}, {1, 1}, {0, 1}, {-1, 1}, {-1, 0}, {-1, -1}, {0, -1}, {1, -1}};

void solve() {
  int N, M;
  cin>>N>>M;
  vector<int> cost(N);
  for(int i=0; i<N; i++) {
    cin>>cost[i];
  }

  vector<vector<int>> g(N);
  for(int i=0; i<M; i++) {
    int u, v;
    cin>>u>>v;
    u--, v--;
    g[u].push_back(v);
  }

  vector<char> used(N);
  int ans = -INF;
  auto dfs = [&](auto &&self,int u, int mi, int diff) {
    if(used[u]) return;
    used[u] = 1;
    diff = max(cost[u]-mi, diff);
    ans = max(diff, ans);
    mi = min(cost[u], mi);
    for(auto v: g[u]) {
      self(self, v, mi, diff);
    }
  };

  for(int i=0; i<N; i++) {
    if(!used[i]) {
      int mi = INF;
      int diff = -INF;
      dfs(dfs, i, mi, diff);
    }
  }
  cout<<ans<<"\n";
}

// 

int32_t main ()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int t = 1;
    while (t--) solve();
    return 0;
}
