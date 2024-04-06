/**
 *    author: mralves 
 *    created: 06-01-2024 08:57:59       
**/
#include <bits/stdc++.h>

#define pb(x) push_back(x)
#define all(x) x.begin(),x.end()

using namespace std;
using ll = long long;
using pii = pair<int, int>;

ll ceil(ll a, ll b) {return a % b == 0 ? a / b : a / b + 1;}
vector<pii> dir4 = {{1, 0}, {0, 1}, {-1, 0}, {0, -1}};
vector<pii> dir8 = {{1, 0}, {1, 1}, {0, 1}, {-1, 1}, {-1, 0}, {-1, -1}, {0, -1}, {1, -1}};

void solve() {
  int N, M;
  cin>>N>>M;
  vector<int> a(N);
  for(int i=0; i<N; i++) {
    cin>>a[i];
  }

  vector<vector<int>> G(N);
  for(int i=0; i<M; i++) {
    int u, v;
    cin>>u>>v;
    u--, v--;
    G[u].emplace_back(v);
    G[v].emplace_back(u);
  }

  vector<bool> used(N);
  vector<int> best(N, -1);
  auto dfs = [&](auto &&self, int u, int p, int sum) {
    //jcout<<p<<" "<<u<<"\n";
    //jif(p>0) {
    //j  cout<<a[p]<<" "<<a[u]<<"\n";
    //j}
    if(p>=0 and a[u] < a[p]) return;
    sum += (p<0 or a[u]!=a[p]);
    if(sum <= best[u]) return;
    best[u] = sum;
    if(u == N-1) return;
    for(auto v:G[u]) {
      if(used[v]) continue;
      used[v] = 1;
      self(self, v, u, sum);
      used[v] = 0;
    }
  };

  dfs(dfs, 0, -1, 0);
  if(best[N-1] == -1)
    cout<<"0\n";
  else
    cout<<best[N-1]<<"\n";
}

int main ()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int t = 1;
    while (t--) solve();
    return 0;
}
