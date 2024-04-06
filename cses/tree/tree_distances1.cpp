#include <bits/stdc++.h>
using namespace std;

vector<int> G[200005];

int dis1[200005];

int dfs1(int u, int p, int dis) {
  dis1[u] = dis;
  for(auto v: G[u]) {
    if(v == p) continue;
    dfs1(v, u, dis+1);
  }
}


int main() {
  int N; cin>>N;
  for(int i=0; i<N; i++) {
    int u, v;
    cin>>u>>v;
    u--, v--;
    G[u].emplace_back(v);
    G[v].emplace_back(u);
  }

  dfs1(0, -1, 0);


  return 0;
}
