#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using pii = pair<int, int>;
using pll = pair<ll, ll>;

const ll INF = 1e12;

int main() {
  std::ios::sync_with_stdio(0);
  cin.tie(0);
  
  int N, M;
  cin>>N>>M;

  vector<vector<pll>> g(N);
  for(int i=0; i<M; i++) {
    int u, v, w;
    cin>>u>>v>>w;
    u--; v--;
    g[u].emplace_back(v, w);
    g[v].emplace_back(u, w);
  }

  priority_queue<pll, vector<pll>, greater<pll>> pq;
  vector<int> p(N, -1);
  vector<ll> cost(N, INF);
  pq.emplace(0, 0);
  cost[0] = 0;
  while(!pq.empty()) {
    auto [acc, u] = pq.top();
    pq.pop();
    if(u == N-1) break;
    for(auto [v, w] : g[u]) {
      if(w+acc < cost[v]) {
        p[v] = u;
        cost[v] = w+acc;
        pq.emplace(w+acc, v);
      }
    }
  }

  if(p[N-1] == -1) {
    cout<<"-1\n";
    return 0;
  }

  vector<int> path;
  int cur = N-1;
  while(cur != -1) {
    path.push_back(cur);
    cur = p[cur];
  }
  reverse(path.begin(), path.end());

  for(auto x: path) {
    cout<<x+1<<" ";
  }
  cout<<"\n";
  return 0;
}
