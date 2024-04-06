#include <bits/stdc++.h>
using namespace std;

using ll = long long;
int main() {
  int N; cin>>N;
  vector<int> a(N);
  vector<vector<int>> G(N);
  for(int i=0; i<N; i++) {
    cin>>a[i];
  }
  for(int i=0; i<N-1; i++) {
    int u, v;
    cin>>u>>v;
    u--, v--;
    G[u].push_back(v);
    G[v].push_back(u);
  }

  vector<ll> sum(N), dp(N);
  auto dfs1 = [&](auto &&self, int u, int p) -> void {
    sum[u] = a[u];
    for(auto v:G[u]) {
      if(v == p) continue;
      self(self, v, u);
      sum[u] += sum[v];
      dp[u] += sum[v]+dp[v];
    }
  };
  vector<ll> ans(N);
  auto dfs2 = [&](auto &&self, int u, int p) -> void {
    if(p != -1) {
      ans[u] = ans[p]+(sum[0]-sum[u]);
      ans[u] -= dp[u]+sum[u];
    }
    ans[u] += dp[u];
    for(auto v: G[u]) {
      if(v == p) continue;
      self(self, v, u);
    }
  };
  dfs1(dfs1, 0, -1);
  dfs2(dfs2, 0, -1);
  ll best = 0;
  for(auto x:ans) best = max(best, x);
  cout<<best<<"\n";
  return 0;
}
