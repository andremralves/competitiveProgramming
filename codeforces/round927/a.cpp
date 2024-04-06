/**
 *    author: mralves 
 *    created: 18-02-2024 09:03:00       
**/
#include <bits/stdc++.h>

#define all(x) x.begin(),x.end()

// less is more
using namespace std;
using ll = long long;

void solve() {
  int N; cin>>N;
  string s; cin>>s;
  int ans = 0;
  for(int i=0; i<N; i++) {
    if(s[i] == '@') ans++;
    if(i>0 and s[i-1] == '*' and s[i] == '*') {
      break;
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
