/**
 *    author: mralves 
 *    created: 28-12-2023 11:35:40       
**/
#include <bits/stdc++.h>

#define pb(x) push_back(x)
#define all(x) x.begin(),x.end()

using namespace std;
using ll = int64_t;
using pii = pair<int, int>;

ll ceil(ll a, ll b) {return a % b == 0 ? a / b : a / b + 1;}
vector<pii> dir4 = {{1, 0}, {0, 1}, {-1, 0}, {0, -1}};
vector<pii> dir8 = {{1, 0}, {1, 1}, {0, 1}, {-1, 1}, {-1, 0}, {-1, -1}, {0, -1}, {1, -1}};

const ll INF = 1e18+10;

void solve() {
  int N, M;
  cin>>N>>M;
  vector<vector<pii>> G(N);
  for(int i=0; i<M; i++) {
    int u, v, w;
    cin>>u>>v>>w;
    u--, v--;
    G[u].emplace_back(v, w);
    G[v].emplace_back(u, w);
  }

  vector<int> bike(N);
  for(int i=0; i<N; i++) {
    cin>>bike[i];
  }

  set<array<ll, 3>> que;
  vector<vector<ll>> dis(N, vector<ll>(N, INF));
  que.insert({0, 0, 0});
  dis[0][0] = 0;
  while(que.size() > 0) {
    auto [cost, u, bk] = *que.begin();
    //cout<<u<<" "<<cost<<" "<<bk<<"\n";
    que.erase(que.begin());
    for(auto [v, w]: G[u]) {

      if(bike[bk] != bike[u]) {
        que.insert({cost, u, u});
      }

      if(cost + w*bike[bk] < dis[v][bk]) {
        array<ll, 3> arr = {dis[v][bk], v, bk};
        if(que.count(arr))
          que.erase(arr);
        que.insert({cost+w*bike[bk], v, bk});
        dis[v][bk] = cost+w*bike[bk];
      }
    }
  }
  ll ans = INF;
  for(auto d:dis[N-1]) {
    ans = min(d, ans);
  }
  cout<<ans<<"\n";
}

int main ()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int t = 1;
    cin>>t;
    while (t--) solve();
    return 0;
}
