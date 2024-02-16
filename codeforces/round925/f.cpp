#include <bits/stdc++.h>
using namespace std;

void solve() {
  int N, K;
  cin>>N>>K;
  vector<set<int>> G(N);
  for(int i=0; i<K; i++) {
    vector<int> a(N);
    for(int j=0; j<N; j++) {
      cin>>a[j]; a[j]--;
      if(j>1) {
        //cout<<a[j-1]<<" "<<a[j]<<"\n";
        G[a[j-1]].insert(a[j]);
      }
    }
  }

  vector<int> color(N);
  bool ok = true;
  auto dfs = [&](auto &&self, int u) -> void {
    if(color[u] == 2) return;
    if(color[u] == 1) {
      ok = false;
      return;
    }
    color[u] = 1;
    for(auto v:G[u]) {
      self(self, v);
    }
    color[u] = 2;
  };

  for(int i=0; i<N; i++) {
    if(!color[i]) dfs(dfs, i);
  }
  cout<<(ok?"YES":"NO")<<"\n";
}

int main() {
  int t = 1;
  cin>>t;
  while(t--) solve();
  return 0;
}
