#include<bits/stdc++.h>
using namespace std;

void solve() {
  int N; cin>>N;
  vector<vector<int>> G(N);
  for(int i=0; i<N-1; i++) {
    int u, v;
    cin>>u>>v;
    u--, v--;
    G[u].emplace_back(v);
    G[v].emplace_back(u);
  }

  auto dfs = [&](auto &&self, int u) {
  };
  for(int i=0; i<N; i++) {
  }
}

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  int t = 0;
  cin>>t;
  while(t--) solve();
  return 0;
}
