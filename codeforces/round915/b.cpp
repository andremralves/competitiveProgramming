/**
 *    author: mralves 
 *    created: 16-12-2023 11:34:27       
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
    u--, v--;
    G[u].emplace_back(v);
    G[v].emplace_back(u);
  }

  int leaf = 0;
  for(int i=0; i<N; i++) {
    if(G[i].size() == 1) {
      leaf++;
    }
  }
  cout<<(leaf+1)/2<<"\n";

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
