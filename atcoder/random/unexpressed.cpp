#include <bits/stdc++.h>
using namespace std;

using ll = int64_t;

int main() {
  ll N;
  cin>>N;
  ll ans = N;
  map<ll, int> used;
  for(ll i=2; i*i<=N; i++) {
    ll x = i;
    while(x <= N/i) {
      if(used.count(x) == 0) {
        used[x] = 1;
        ans--;
      }
      x*=i;
    }
  }
  cout<<ans<<"\n";
  return 0;
}
