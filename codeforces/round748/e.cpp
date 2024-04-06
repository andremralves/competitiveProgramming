/**
 *    author: mralves 
 *    created: 31-01-2024 10:41:55       
**/
#include <bits/stdc++.h>

#define all(x) x.begin(),x.end()
#define make_unique(x) {sort(x.begin(), x.end());x.erase(unique(x.begin(), x.end()), x.end());}

// less is more
using namespace std;
using ll = long long;

void solve() {
  int N, K; cin>>N>>K;

  vector<set<int>> G(N);
  for(int i=0; i<N-1; i++) {
    int u, v;
    cin>>u>>v;
    u--, v--;
    G[u].insert(v);
    G[v].insert(u);
  }

  vector<int> leaves;
  for(int i=0; i<N; i++) {
    if(G[i].size() == 1)
      leaves.emplace_back(i);
  }

  int rem = 0;
  make_unique(leaves);
  while(leaves.size() and K--) {
    if(leaves.size() == 2 and *G[leaves[0]].begin() == leaves[1]) {
      rem += 2;
      break;
    }
    vector<int> next;
    rem += leaves.size();
    for(auto l:leaves) {
      int v = *G[l].begin();
      G[v].erase(l);
      if(G[v].size() == 1)
        next.emplace_back(v);
    }
    make_unique(next);
    leaves = next;
  }
  if(K>0) rem++;
  cout<<max(0, N-rem)<<"\n";
}

int main () {
  std::ios::sync_with_stdio(false);
  std::cin.tie(nullptr);

  int t = 1;
  cin>>t;
  while (t--) solve();
  return 0;
}
