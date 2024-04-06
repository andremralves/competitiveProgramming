/**
 *    author: mralves 
 *    created: 18-01-2024 11:33:48       
**/
#include <bits/stdc++.h>

#define all(x) x.begin(),x.end()

// less is more
using namespace std;
using ll = long long;

void solve() {
  ll X; cin>>X;

  vector<int> ans;

  int v = 1;
  while((1ll<<(ans.size()+1)) <= X) {
    ans.emplace_back(v++);
  }
  X-=(1ll<<ans.size());

  while(X) {
    int take = 0;
    for(int i=1; i<=(int)ans.size(); i++) {
      if((1ll<<i) > X) break;
      take = i;
    }
    X -= (1ll<<take);
    ans.emplace_back(ans[take]);
  }

  cout<<ans.size()<<"\n";
  for(auto x:ans) {
    cout<<x<<" ";
  }
  cout<<"\n";


}

int main () {
  std::ios::sync_with_stdio(false);
  std::cin.tie(nullptr);

  int t = 1;
  cin>>t;
  while (t--) solve();
  return 0;
}
