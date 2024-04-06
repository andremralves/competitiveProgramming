/**
 *    author: mralves 
 *    created: 17-02-2024 11:34:22       
**/
#include <bits/stdc++.h>

#define all(x) x.begin(),x.end()

// less is more
using namespace std;
using ll = long long;

void solve() {
  int N; cin>>N;
  int r = N, l = 1;
  bool ok = true;
  for(int i=0; i<N; i++) {
    if(ok)
      cout<<r--<<" ";
    else
      cout<<l++<<" ";
    ok ^= 1;
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
