/**
 *    author: mralves 
 *    created: 19-02-2024 01:50:47       
**/
#include <bits/stdc++.h>

#define all(x) x.begin(),x.end()

// less is more
using namespace std;
using ll = long long;

void solve() {
  int N; cin>>N;
  bool one = 1;
  for(int i=0; i<2*N+1; i++) {
    cout<<(one?"1":"0");
    one ^= 1;
  }
  cout<<"\n";
}

int main () {
  std::ios::sync_with_stdio(false);
  std::cin.tie(nullptr);

  int t = 1;
  while (t--) solve();
  return 0;
}
