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
  vector<ll> a(N), s(N), t(N);
  for(int i=0; i<N; i++) cin>>a[i];
  for(int i=0; i<N-1; i++) {
    cin>>s[i]>>t[i];
  }

  for(int i=0; i<N-1; i++) {
    ll x = a[i]/s[i];
    a[i+1] += 1ll*x*t[i];
  }
  cout<<a[N-1]<<"\n";
}

int main () {
  std::ios::sync_with_stdio(false);
  std::cin.tie(nullptr);

  int t = 1;
  while (t--) solve();
  return 0;
}
