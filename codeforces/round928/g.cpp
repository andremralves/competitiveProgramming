/**
 *    author: mralves 
 *    created: 19-02-2024 11:33:03       
**/
#include <bits/stdc++.h>

#define all(x) x.begin(),x.end()

// less is more
using namespace std;
using ll = long long;

void solve() {
  int N; cin>>N;
  vector<vector<int>> G(N);
  for(int i=0; i<N-1; i++) {
    int p; cin>>p; p--;
    G[p].push_back(i+1);
    G[i+1].push_back(p);
  }
  string s; cin>>s;

  int walls = 0;
  auto dfs = [&](auto &&self, int u, int p) -> int {
    int noise=0, silence=0;
    for(auto v: G[u]) {
      if(v == p) continue;
      int st = self(self, v, u);
      if(st == 0) silence++;
      if(st == 1) noise++;
    }
    if(s[u] == 'S') {
      walls+=noise;
      return 0;
    } else if(s[u] == 'P') {
      walls+=silence;
      return 1;
    } else {
      walls+=min(silence, noise);
      if(silence == noise) {
        return 2;
      }
      if(silence<noise) {
        return 1;
      } else {
        return 0;
      }
    }
  };
  dfs(dfs, 0, -1);
  cout<<walls<<"\n";

}

int main () {
  std::ios::sync_with_stdio(false);
  std::cin.tie(nullptr);

  int t = 1;
  cin>>t;
  while (t--) solve();
  return 0;
}
