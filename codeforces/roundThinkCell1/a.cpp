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
  vector<int> a(N*2);
  for(int i=0; i<2*N; i++) {
    cin>>a[i];
  }
  sort(a.begin(), a.end());
  int ans = 0;
  for(int i=0; i<2*N; i+=2) {
    ans += a[i];
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
