#include <bits/stdc++.h>
using namespace std;

using ll = long long;
const int INF = 1e9+10;
const int MOD = 1e9+7;
void solve() {
  int N, K; cin>>N>>K;
  vector<int> a(N);
  for(int i=0; i<N; i++) {
    cin>>a[i];
  }
  ll sum = 0;
  ll mx = -INF;
  for(int i=0; i<N; i++) {
    if(sum < 0) sum = 0;
    sum += a[i];
    mx = max(sum, mx);
  }
  if(mx < 0) mx = 0;

  //mx %= MOD;
  //if(mx < 0) mx += MOD;

  ll ans = mx;
  for(int i=0; i<K-1; i++) {
    mx *= 2; mx %= MOD;
    ans += mx;
    ans %= MOD;
  }
  ans += accumulate(a.begin(), a.end(), 0ll);
  ans %= MOD;
  if(ans < 0) ans += MOD;
  cout<<ans<<"\n";
}

int main() {
  int t; cin>>t;
  while(t--) solve();
  return 0;
}

// 2 2 8 12 24 48
