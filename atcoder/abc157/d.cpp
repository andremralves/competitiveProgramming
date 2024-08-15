#include <bits/stdc++.h>

#define all(x) x.begin(),x.end()

// less is more
using namespace std;
using ll = long long;

void solve() {
  int N, M, K;
  cin>>N>>M>>K;
  vector<vector<int>> G(N);
  set<pair<int, int>> fri;
  set<pair<int, int>> blk;
  for(int i=0; i<M; i++) {
    int a, b;
    cin>>a>>b;
    a--, b--;
    fri.insert(minmax(a, b));
    G[a].push_back(b);
    G[b].push_back(a);
  }
  for(int i=0; i<K; i++) {
    int a, b;
    cin>>a>>b;
    a--, b--;
    blk.emplace(minmax(a, b));
  }

  vector<int> color(N);
  auto dfs = [&](auto &&self, int u, int c) -> ll {
    if(color[u] != 0) return 0;
    color[u] = c; 
    int cnt = 0;
    for(auto v:G[u]) {
      cnt += self(self, v, c);
    }
    return cnt+1;
  };
  int c = 1;
  map<int, int> col_cand;
  for(int i=0; i<N; i++) {
    if(color[i] == 0) {
      int cnt = dfs(dfs, i, c);
      col_cand[c] = cnt;
      c++;
    }
  }
  vector<int> candidates(N);
  for(int i=0; i<N; i++) {
    candidates[i] = col_cand[color[i]]-1;
  }
  for(auto [u, v]:fri) {
    if(color[u] == color[v]) {
      candidates[u]--;
      candidates[v]--;
    }
  }
  for(auto [u, v]:blk) {
    if(color[u] == color[v] and fri.count({u, v}) == 0) {
      candidates[u]--;
      candidates[v]--;
    }
  }
  for(auto x:candidates) {
    cout<<x<<" ";
  }
  cout<<"\n";
}

int main () {
  std::ios::sync_with_stdio(false);
  std::cin.tie(nullptr);

  int t = 1;
  while (t--) solve();
  return 0;
}
