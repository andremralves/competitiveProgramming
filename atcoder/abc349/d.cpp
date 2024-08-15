#include <bits/stdc++.h>

#define all(x) x.begin(),x.end()

// less is more
using namespace std;
using ll = long long;

void solve() {
  ll L, R;
  cin>>L>>R;
  ll l=L;
  vector<pair<ll, ll>> ans;
  int ctz = 63-__builtin_clzll(R);
  if(L == 0) {
    ans.push_back({L, (1ll<<ctz)});
    l = (1ll<<ctz);
  }
  while(l < R) {
    //cout<<l<<"\n";
    ctz = __builtin_ctzll(l);
    for(int i=ctz; i>=0; i--) {
      ll x = l/(1ll<<i);
      //cout<<x<<" "<<x+1<<"\n";
      if((1ll<<i) <= R/(x+1)) {
        ans.push_back({l, (1ll<<i)*(x+1)});
        l = (1ll<<i)*(x+1);
        break;
      }
    }
  }
  cout<<ans.size()<<"\n";
  for(auto [x, y]:ans) {
    cout<<x<<" "<<y<<"\n";
  }
}

int main () {
  std::ios::sync_with_stdio(false);
  std::cin.tie(nullptr);

  int t = 1;
  //cin>>t;
  while (t--) solve();
  return 0;
}
