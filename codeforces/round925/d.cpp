#include <bits/stdc++.h>
using namespace std;

void solve() {
  int N, X, Y;
  cin>>N>>X>>Y;
  map<pair<int, int>, int> mp;
  long long ans = 0;
  for(int i=0; i<N; i++) {
    int v; cin>>v;
    int rem = v%X;
    int rem2 = v%Y;
    //cout<<rem<<" "<<rem2<<"\n";
    ans += mp[make_pair((X-rem)%X, rem2)];
    mp[make_pair(rem, rem2)]++;

  }
  cout<<ans<<"\n";
}

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  int t=0;
  cin>>t;
  while(t--) solve();
  return 0;
}
