/**
 *    author: mralves 
 *    created: 21-02-2024 02:13:43       
**/
#include <bits/stdc++.h>

#define all(x) x.begin(),x.end()

// less is more
using namespace std;
using ll = long long;

const ll INF = 9e18;
ll f(ll a, ll b) { return a*a*a+b*b*b+a*a*b+b*b*a; }
void solve() {
  ll N; cin>>N;
  if(N == 0) {
    cout<<"0\n";
    return;
  }
  ll ans = INF;
  for(ll a=0; a*a*a<=N; a++) {
    ll lo = -1, hi = 1e6+1;
    while(hi-lo>1) {
      ll b = lo+(hi-lo)/2;
      ll res = f(a, b);
      if(res >= N) {
        hi = b;
      } else {
        lo = b;
      }
    }
    ans = min(ans, f(a, hi));
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
