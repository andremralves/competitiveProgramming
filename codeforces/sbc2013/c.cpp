#include <bits/stdc++.h>
using namespace std;

const int INF = 101;
int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  int N, M, I;
  cin>>N>>M>>I;

  vector<int> w(N);
  for(int i=0; i<N; i++) {
    cin>>w[i];
  }

  vector<vector<int>> g(N);
  vector<int> pos(N);
  iota(pos.begin(), pos.end(), 0);
  for(int i=0; i<M; i++) {
    int u, v; cin>>u>>v;
    u--, v--;
    g[v].emplace_back(u);
  }

  vector<vector<int>> parents(N);
  vector<int> visited(N);
  auto dfs = [&](auto&& self, int u, int x) -> void {
    if(visited[u]) return;
    visited[u] = true;
    if(x != u)
      parents[x].emplace_back(u);
    for(auto v: g[u]) {
      self(self, v, x);
    }
  };

  for(int i=0; i<N; i++) {
    visited.assign(N, 0);
    dfs(dfs, i, i);
  }

  while(I--) {
    char c;
    int u, v;
    cin>>c;
    if(c == 'P') {
      cin>>u; u--;
      int ans = INF; 
      int up = find(pos.begin(), pos.end(), u)-pos.begin();
      for(int p: parents[up]) {
        ans = min(w[pos[p]], ans);
      }
      if(ans == INF) {
        cout<<"*\n";
      } else {
        cout<<ans<<"\n";
      }
    } else {
      cin>>u>>v;
      u--, v--;
      auto up = find(pos.begin(), pos.end(), u);
      auto vp = find(pos.begin(), pos.end(), v);
      swap(*up, *vp);
    }
  }
  return 0;
}
