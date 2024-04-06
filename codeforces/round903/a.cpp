/**
 *    author: mralves 
 *    created: 08-01-2024 21:25:24       
**/
#include <bits/stdc++.h>

#define all(x) x.begin(),x.end()

// less is more
using namespace std;
using ll = long long;

void solve() {
  int N, M;
  string s, x;
  cin>>N>>M;
  cin>>x>>s;
  int ans = 0;
  while(x.find(s) == string::npos) {
    if(x.size() > 1000) {
      cout<<"-1\n";
      return;
    }
    x += x;
    ans++;
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
