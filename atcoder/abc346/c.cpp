/**
 *    author: mralves 
 *    created: 23-03-2024 08:59:03       
**/
#include <bits/stdc++.h>

#define all(x) x.begin(),x.end()

// less is more
using namespace std;
using ll = long long;

void solve() {
  ll N, K;
  cin>>N>>K;
  vector<ll> a(N);
  for(int i=0; i<N; i++) {
    cin>>a[i];
  }
  sort(a.begin(), a.end());
  ll s=1;
  ll ans = 0;
  for(int i=0; i<N; i++) {
    if(a[i] < s) continue;
    if(a[i] == s) {
      s++;
      continue;
    }
    if(a[i] > K) continue;
    ans += (a[i]+s)*(a[i]-s+1)/2-a[i];
    s = a[i]+1;
  }
  if(s <= K) {
    ans += (K+s)*(K-s+1)/2;
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
