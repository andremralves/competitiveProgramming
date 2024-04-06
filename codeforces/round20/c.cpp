#include <bits/stdc++.h>
using namespace std;

using ll = long long;
const ll INF = 1e18+10;
int main() {
  int N, M; cin>>N>>M;
  vector<vector<pair<int, int>>> G(N);
  for(int i=0; i<M; i++) {
    int a, b, w;
    cin>>a>>b>>w;
    a--, b--;
    G[a].push_back({b, w});
    G[b].push_back({a, w});
  }

  vector<ll> dis(N, INF);
  vector<int> p(N);
  priority_queue<pair<ll, int>, vector<pair<ll, int>>, greater<pair<ll, int>>> pq;
  pq.push({0, 0}); dis[0] = 0;
  p[0] = -1;
  while(!pq.empty()) {
    auto [cost, u] = pq.top();
    pq.pop();
    for(auto [v, w] :G[u]) {
      if(dis[v] > cost+w) {
        p[v] = u;
        dis[v] = cost+w;
        pq.push({cost+w, v});
      }
    }
  }
  if(dis[N-1] == INF) {
    cout<<"-1\n";
  } else {
    vector<int> path;
    int cur = N-1;
    while(cur != -1) {
      path.push_back(cur+1);
      cur = p[cur];
    }
    reverse(path.begin(), path.end());
    for(auto x:path) cout<<x<<" ";
    cout<<"\n";
  }

  return 0;
}

