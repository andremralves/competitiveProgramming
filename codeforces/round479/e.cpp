/**
 *    author: mralves 
 *    created: 23-02-2024 00:40:02       
**/
#include <bits/stdc++.h>

#define all(x) x.begin(),x.end()

// less is more
using namespace std;
using ll = long long;

void solve() {
  int N, M;
  cin>>N>>M;
  vector<vector<int>> G(N);
  while(M--) {
    int u, v;
    cin>>u>>v;
    u--, v--;
    G[u].push_back(v);
    G[v].push_back(u);
  }
  vector<int> used(N);
  auto dfs = [&](auto &&self, int u) -> bool {
    used[u] = 1;
    bool ok = G[u].size() == 2;
    for(auto v:G[u]) {
      if(used[v]) continue;
      if(!self(self, v)) ok = false;
    }
    return ok;
  };
  int ans = 0;
  for(int i=0; i<N; i++) {
    if(used[i]) continue;
    if(dfs(dfs, i)) {
      ans++;
    }
  }
  cout<<ans<<"\n";
}

int main () {
  std::ios::sync_with_stdio(false);
  std::cin.tie(nullptr);

  int t = 1;
  while (t--) solve();
  return 0;
}
