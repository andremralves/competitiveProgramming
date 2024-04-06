/**
 *    author: mralves 
 *    created: 27-02-2024 11:34:34       
**/
#include <bits/stdc++.h>

#define all(x) x.begin(),x.end()

// less is more
using namespace std;
using ll = long long;

void solve() {
  int a, b, l;
  cin>>a>>b>>l;
  set<int> ans;
  for(int x=0; x<26; x++) {
    if(pow(a, x) > l) break;
    for(int y=0; y<26; y++) {
      if(pow(b, y) > l) break;
      int v = pow(a, x)*pow(b, y);
      if(l%v==0) {
        ans.insert(l/v);
      }
    }
  }
  cout<<ans.size()<<"\n";
}

int main () {
  std::ios::sync_with_stdio(false);
  std::cin.tie(nullptr);

  int t = 1;
  cin>>t;
  while (t--) solve();
  return 0;
}
