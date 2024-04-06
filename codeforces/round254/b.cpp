#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main() {
  int N, M;
  cin>>N>>M;

  vector<vector<int>> G(N);
  for(int i=0; i<M; i++) {
    int x, y;
    cin>>x>>y;
    x--, y--;
    G[x].emplace_back(y);
    G[y].emplace_back(x);
  }

  vector<int> used(N);
  auto dfs = [&](auto &&self, int u) {
    if(used[u]) return 0;
    used[u] = 1;
    int cnt = 0;
    for(auto v:G[u]) {
      cnt += self(self, v);
    }
    return cnt+1;
  };

  int cnt = 0;
  for(int i=0; i<N; i++) {
    if(!used[i]) {
      dfs(dfs, i);
      cnt++;
    }
  }
  cout<<(1ll<<(N-cnt))<<"\n";
  return 0;
}
