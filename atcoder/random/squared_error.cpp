#include <bits/stdc++.h>
using namespace std;
using ll = int64_t;

int main() {
  int N;
  cin>>N;
  map<ll, ll> mp;
  ll ans = 0;
  for(int i=0; i<N; i++) {
    ll x; cin>>x;
    if(i) {
      for(auto [a, b]:mp) {
        ans += (x-a)*(x-a)*b;
      }
    }
    mp[x]++;
  }
  cout<<ans<<"\n";

  return 0;
}
