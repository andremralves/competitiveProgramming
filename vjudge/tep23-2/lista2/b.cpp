#include <bits/stdc++.h>

using namespace std;

int main() {
  int N, K, L;
  cin>>N>>K>>L;
  vector<vector<int>> roads(N);
  vector<vector<int>> rails(N);
  for(int i=0; i<K; i++) {
    int u, v;
    cin>>u>>v;
    u--, v--;
    roads[u].push_back(v);
    roads[v].push_back(u);
  }
  for(int i=0; i<L; i++) {
    int u, v;
    cin>>u>>v;
    u--, v--;
    rails[u].push_back(v);
    rails[v].push_back(u);
  }


  vector<bool> used(N);
  auto dfs = [&](int i, vector<vector<int>> &g, vector<int> &used, int cnt, auto &&dfs) {
    if(used[i]) return;
    used[i] = cnt;
    for(auto j: g) {
      dfs(j, g, used, cnt, dfs);
    }
  }

  vector<int> used_roads(N), used_rails(N);
  int cnt = 1;
  for(int i=0; i<N; i++) {
    if(!used_roads[i]) {
      dfs(i, roads, used_roads, cnt, dfs);
      cnt++;
    }
  }
  cnt = 1;
  for(int i=0; i<N; i++) {
    if(!used_rails[i]) {
      dfs(i, rails, used_rails, cnt, dfs);
      cnt++;
    }
  }

  for(int i=0; i<N; i++) {
  }
  return 0;
}
