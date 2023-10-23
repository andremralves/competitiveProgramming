#include <bits/stdc++.h>

using namespace std;

void solve() {
  int N, Q;
  string s;
  cin>>N>>s>>Q;

  map<ll, ll> mp;
  for(int i=0; i<Q; i++) {
    ll q;
    cin>>q;
    mp[q]++;
  }

  ll ans = 0;
  for(int i=0; i<N; i++) {
    if() {
    }
  }
  cout<<ans<<"\n"; 
}

int main() {
  std::ios::sync_with_stdio(false);
  std::cin.tie(nullptr);
  int t;
  cin>>t;
  for(int i=1; i<=t; i++) {
    cout<<"Case #"<<i<<": ";
    solve();
  }
  return 0;
}


}
