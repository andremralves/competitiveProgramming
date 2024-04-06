/**
 *    author: mralves 
 *    created: 17-02-2024 17:35:45       
**/
#include <bits/stdc++.h>

#define all(x) x.begin(),x.end()

// less is more
using namespace std;
using ll = long long;

void solve() {
  int N; cin>>N;

  int ans = 0;
  for(int i=1; i<=N; i++) {
    int d = (N+i-1)/i-1;
    ans += d;
  }
  cout<<ans<<"\n";
}

int main () {
  std::ios::sync_with_stdio(false);
  std::cin.tie(nullptr);

  int t = 1;
  while (t--) solve();
  return 0;
}
