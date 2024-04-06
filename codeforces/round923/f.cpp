/**
 *    author: mralves 
 *    created: 06-02-2024 11:43:54       
**/
#include <bits/stdc++.h>

#define all(x) x.begin(),x.end()

// less is more
using namespace std;
using ll = long long;
const int INF = 1e6+10;

void solve() {
  int N, M; cin>>N>>M;
  vector<vector<pair<int, int>>> G(N);
  for(int i=0; i<M; i++) {
    int u, v, w;
    cin>>u>>v>>w;
    u--, v--;
    G[u].emplace_back(w, v);
    G[v].emplace_back(w, u);
  }

  vector<int> path, color(N);
  auto dfs = [&](auto &&self, int u) -> void {
    for(auto [w, v]: G[u]) {
      if(path.size() > 1 and v == path[path.size()-2]) continue;
      if(!color[v]) {
        color[v] = 1;
        path.emplace_back(v);
        self(self, v);
        path.pop_back();
      } else {
        color[v] = 2;
        for(int i=path.size()-1; i>=0; i--) {
          if(color[path[i]] == 2) break;
          color[path[i]] = 2;
        }
      }
    }
  };
  for(int i=0; i<N; i++) {
    if(!color[i])
      dfs(dfs, i);
  }

  int mn = INF;
  for(int i=0; i<N; i++) {
    for(auto [w, v]:G[i]) {
      if(color[i] == 2 and color[v] == 2) {
        if(w < mn) {
          mn = w;
        }
      }
    }
  }
  cout<<mn<<"\n";
}

int main () {
  std::ios::sync_with_stdio(false);
  std::cin.tie(nullptr);

  int t = 1;
  cin>>t;
  while (t--) solve();
  return 0;
}
