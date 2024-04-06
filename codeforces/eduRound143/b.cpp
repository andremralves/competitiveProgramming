/**
 *    author: mralves 
 *    created: 22-01-2024 21:10:48       
**/
#include <bits/stdc++.h>

#define all(x) x.begin(),x.end()

// less is more
using namespace std;
using ll = long long;

void solve() {
  int N, K;
  cin>>N>>K;
  bool ok = 0, ok2 = 0;
  for(int i=0; i<N; i++) {
    int l, r;
    cin>>l>>r;
    if(l==K) ok = true;
    if(K==r) ok2 = true;
  }
  cout<<((ok and ok2)?"YES\n":"NO\n");
}

int main () {
  std::ios::sync_with_stdio(false);
  std::cin.tie(nullptr);

  int t = 1;
  cin>>t;
  while (t--) solve();
  return 0;
}
