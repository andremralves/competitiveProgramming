/**
 *    author: mralves 
 *    created: 13-01-2024 11:36:44       
**/
#include <bits/stdc++.h>

#define all(x) x.begin(),x.end()

// less is more
using namespace std;
using ll = long long;

void solve() {
  int N; cin>>N;
  int mx = 1e9, mi=1;
  vector<int> notin;
  for(int i=0; i<N; i++) {
    int x, a;
    cin>>a>>x;
    if(a == 1) {
        mi = max(x, mi);
    } else if(a == 2) {
      mx = min(x, mx);
    } else {
      notin.emplace_back(x);
    }
  }

  int ans = mx-mi+1;
  for(auto x:notin) {
    if(x<=mx and x>= mi) ans--;
  }

  cout<<max(ans, 0)<<"\n";
}


int main () {
  std::ios::sync_with_stdio(false);
  std::cin.tie(nullptr);

  int t = 1;
  cin>>t;
  while (t--) solve();
  return 0;
}
