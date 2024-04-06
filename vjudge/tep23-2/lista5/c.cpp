#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using pii = pair<int, int>;
using pll = pair<ll, ll>;

const int INF = 1e9;

vector<pii> dir4 = {{1,0}, {0, 1}, {-1, 0}, {0, -1}};

int main() {
  int H, W, C1, C2, D1, D2;
  cin>>H>>W;
  cin>>C1>>C2>>D1>>D2;
  vector<string> grid(H);
  vector<vector<pii>> g(H*W);
  for(int i=0; i<H; i++) {
    cin>>grid[i];
  }

  auto use_magic = [&](int u, int x, int y) {
    for(int i=0; i<5; i++) {
      for(int j=0; j<5; j++) {
        if(j == 2 and i == 2) continue;
        if(i+x >= H or i+x < 0 or j+y>=W or j+y<0) continue;
        if(grid[i+x][j+y] == '#') continue;
        int v = (i+x)*W+(j+y);
        g[u].emplace_back(v, 1);
      }
    }
  };

  for(int i=0; i<H; i++) {
    for(int j=0; j<W; j++) {
      if(grid[i][j] == '#') continue;
      int u = i*W+j;
      for(auto [x, y]: dir4) {
        if(i+x >= H or i+x < 0 or j+y>=W or j+y<0) continue;
        if(grid[i+x][j+y] == '#') continue;
        int v = (i+x)*W+(j+y);
        g[u].emplace_back(v, 0);
      }
      // using magic
      int x = i-2, y = j-2;
      use_magic(u, x, y);
    }
  }

  priority_queue<pii, vector<pii>, greater<pii>> pq;
  const int start = (C1-1)*W+(C2-1);
  const int end = (D1-1)*W+(D2-1);
  vector<int> cost(H*W, INF);
  ll ans = -1;
  pq.emplace(0, start);
  while(!pq.empty()) {
    auto [acc, u] = pq.top();
    pq.pop();
    if(u == end) {
      ans = acc;
      break;
    }
    for(auto [v, w]: g[u]) {
      if(acc+w < cost[v]) {
        cost[v] = acc+w;
        pq.emplace(acc+w, v);
      }
    }
  }
  cout<<ans<<"\n";
  return 0;
}
