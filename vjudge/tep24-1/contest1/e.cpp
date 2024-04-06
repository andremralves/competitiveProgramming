#include <bits/stdc++.h>

#define all(x) x.begin(),x.end()

// less is more
using namespace std;
using ll = long long;

const ll INF = 1e18;
void solve() {
  int N, M, X, Y; 
  cin>>N>>M>>X>>Y;
  X--, Y--;
  vector<int> T(M), K(M);
  vector<vector<array<int, 3>>> G(N);
  for(int i=0; i<M; i++) {
    int u, v, t, k;
    cin>>u>>v>>t>>k;
    u--, v--;
    G[u].push_back({v, t, k});
    G[v].push_back({u, t, k});
  }

  set<pair<ll, int>> st;
  vector<ll> cost(N, INF);
  st.insert({0, X});
  cost[X] = 0;
  while(st.size()) {
    auto it = st.begin();
    auto [cos, u] = *it;
    st.erase(it);
    //cout<<"cos:"<<cos<<"\n";
    for(auto [v, t, k]:G[u]) {
      ll next = cos;
      if(next%k)
        next += k-next%k;
      next += t;
      if(cost[v] > next) {
        if(st.count({cost[v], v}))
          st.erase({cost[v], v});
        cost[v] = next;
        st.insert({next, v});
      }
    }
  }
  cout<<(cost[Y] == INF ? -1:cost[Y])<<"\n";
}

int main () {
  std::ios::sync_with_stdio(false);
  std::cin.tie(nullptr);

  int t = 1;
  while (t--) solve();
  return 0;
}
