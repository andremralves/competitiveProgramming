/**
 *    author: mralves 
 *    created: 10-01-2024 23:05:08       
**/
#include <bits/stdc++.h>

#define all(x) x.begin(),x.end()

// less is more
using namespace std;
using ll = long long;

void solve() {
  ll N, M;
  cin>>N>>M;
  set<ll> used;
  ll ans = 0;
  int cnt = 0;
  while(true) {
    ll res = N%M;
    if(used.count(res) or cnt == 100) {
      cout<<"-1\n";
      return;
    }
    used.insert(res);
    if(res == 0) {
      break;
    } else {
      ans+=res;
      res*=2;
      N = res;
    }
    cnt++;
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
