/**
 *    author: mralves 
 *    created: 11-01-2024 16:54:55       
**/
#include <bits/stdc++.h>

#define all(x) x.begin(),x.end()

// less is more
using namespace std;
using ll = long long;

void solve() {
  int N;
  cin>>N;
  vector<set<int>> sets(N);
  set<int> all;
  for(int i=0; i<N; i++) {
    int k;cin>>k;
    while(k--) {
      int x; cin>>x;
      sets[i].insert(x);
    }
    all.insert(sets[i].begin(), sets[i].end());
  }
  int ans = 0;
  for(int i=1; i<=50; i++) {
    set<int> cur;
    for(int j=0; j<N; j++) {
      if(sets[j].count(i)) continue;
      cur.insert(sets[j].begin(), sets[j].end());
    }
    if(cur != all) {
      ans = max((int)cur.size(), ans);
    }
  }
  cout<<ans<<"\n";
}

int main () {
  std::ios::sync_with_stdio(false);
  std::cin.tie(nullptr);

  int t = 1;
  cin>>t;
  while (t--) solve();
  return 0;
}
