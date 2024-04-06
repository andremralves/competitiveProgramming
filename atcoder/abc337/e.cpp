/**
 *    author: mralves 
 *    created: 20-01-2024 08:59:03       
**/
#include <bits/stdc++.h>

#define all(x) x.begin(),x.end()

// less is more
using namespace std;
using ll = long long;

void solve() {
  int N; cin>>N;
  int M = 32-__builtin_clz(N-1);
  cout<<M<<endl;
  vector<vector<int>> ops(M);
  for(int i=1; i<N; i++) {
    for(int j=0; j<M; j++) {
      if(i&(1<<j)) {
        ops[j].emplace_back(i);
      }
    }
  }
  for(auto op:ops) {
    cout<<op.size()<<" ";
    for(auto x:op) cout<<x<<" ";
    cout<<endl;
  }
  string s; cin>>s;
  int ans = 0;
  for(int i=0; i<(int)s.size(); i++) {
    if(s[i] == '1')
      ans += (1<<i);
  }
  if(ans == 0) ans = N;
  cout<<ans<<endl;
}

int main () {
  std::ios::sync_with_stdio(false);
  std::cin.tie(nullptr);

  int t = 1;
  while (t--) solve();
  return 0;
}
