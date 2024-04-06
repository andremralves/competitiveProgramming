/**
 *    author: mralves 
 *    created: 16-12-2023 09:00:37       
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

void solve() {
  int N; cin>>N;
  vector<vector<int>> G(N);
  for(int i=0; i<N-1; i++) {
    int u, v;
    cin>>u>>v;
    u--; v--;
    G[u].emplace_back(v);
    G[v].emplace_back(u);
  }

  vector<int> used(N);
  auto dfs = [&](auto &&self, int u, int p, int &cnt) {
    if(u == 0) return;
    if(used[u]) return;
    used[u] = 1;
    //cout<<u<<" ";
    cnt++;
    for(auto v: G[u]) {
      self(self, v, u, cnt);
    }
  };

  vector<int> sums;
  sums.emplace_back(1);
  int ans = 0;
  for(auto v: G[0]) {
    int cnt = 0;
    //cout<<v<<": ";
    dfs(dfs, v, 0, cnt);
    //cout<<"\n";
    sums.emplace_back(cnt);
  }
  sort(all(sums));
  for(int i=0; i<(int)sums.size()-1; i++) {
    ans +=sums[i];
  }
  cout<<ans<<"\n";

}

int main ()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int t = 1;
    while (t--) solve();
    return 0;
}
