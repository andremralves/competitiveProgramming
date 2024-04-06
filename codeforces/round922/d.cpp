/**
 *    author: mralves 
 *    created: 30-01-2024 11:34:21       
**/
#include <bits/stdc++.h>

#define all(x) x.begin(),x.end()

// less is more
using namespace std;
using ll = long long;

void solve() {
  int N; cin>>N;
  vector<int> a(N);
  for(int i=0; i<N; i++) {
    cin>>a[i];
  }
  ll blk = 0, cur = 0;
  vector<ll> mxs;
  for(int i=0; i<N; i++) {
    if(cur+a[i] < a[i]+blk) {
      cur += a[i];
    } else {
      mxs.emplace_back(cur);
      blk += a[i];
      cur = 0;
    }
  }
  mxs.emplace_back(cur);
  mxs.emplace_back(blk);
  ll ans = 0;
  for(auto x:mxs) {
    ans = max(ans, x);
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
