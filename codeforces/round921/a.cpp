/**
 *    author: mralves 
 *    created: 27-01-2024 20:50:52       
**/
#include <bits/stdc++.h>

#define all(x) x.begin(),x.end()

// less is more
using namespace std;
using ll = long long;

void solve() {
  int N, K; cin>>N>>K;

  string s;
  for(int i=0; i<K; i++) {
    s += 'a'+i;
  }
  string ans;
  for(int i=0; i<N; i++) {
    ans += s;
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
