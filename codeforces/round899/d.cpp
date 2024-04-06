/**
 *    author: mralves 
 *    created: 11-01-2024 16:54:55       
**/
#include <bits/stdc++.h>

#define all(x) x.begin(),x.end()

// less is more
using namespace std;
using ll = long long;

void solve() {
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
    G[u].emplace_back(v);
    G[v].emplace_back(u);
  }
}

int main () {
  std::ios::sync_with_stdio(false);
  std::cin.tie(nullptr);

  int t = 1;
  cin>>t;
  while (t--) solve();
  return 0;
}
