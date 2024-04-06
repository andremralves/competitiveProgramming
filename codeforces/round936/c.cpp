#include <bits/stdc++.h>
using namespace std;

void solve() {
  int N, K; cin>>N>>K; 
  vector<vector<int>> G(N);
  for(int i=0; i<N-1; i++) {
    int u, v;
    cin>>u>>v;
    u--, v--;
    G[u].push_back(v);
    G[v].push_back(u);
  }

  vector<bool> used(N);
  int comps = 0;
  int m;
  auto dfs = [&](auto &&self, int u, int p) -> int {
    int cnt = 1;
    for(auto v: G[u]) {
      if(v != p) {
        cnt += self(self, v, u);
      }
    }
    if(cnt >= m) {
      cnt = 0;
      comps++;
    }
    return cnt;
  };
  int lo=0, hi = N;
  while(hi-lo > 1) {
    m = lo+(hi-lo)/2;
    comps = 0;
    dfs(dfs, 0, -1);
    //cout<<m<<" "<<comps<<"\n";
    if(comps >= K+1) {
      lo = m;
    } else {
      hi = m;
    }
  }
  cout<<lo<<"\n";
}
// 1-2-3-4 5-6
// 1-2-4
// | |
// 3 5
// |---7
// 6

int main() {
  int t = 0; cin>>t;
  while(t--) solve();
  return 0;
}
