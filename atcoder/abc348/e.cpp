#include <bits/stdc++.h>

#define all(x) x.begin(),x.end()

// less is more
using namespace std;
using ll = long long;

void solve() {
  int N; cin>>N;
  vector<vector<int>> G(N);
  for(int i=0; i<N-1; i++) {
    int a, b;
    cin>>a>>b;
    G[a].push_back(b);
    G[b].push_back(a);
  }
  vector<int> c(N);
  for(int i=0; i<N; i++) {
    cin>>c[i];
  }

  auto dfs = [&](auto &&self, int u) {
  };
}

int main () {
  std::ios::sync_with_stdio(false);
  std::cin.tie(nullptr);

  int t = 1;
  while (t--) solve();
  return 0;
}
