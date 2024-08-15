#include <bits/stdc++.h>

#define all(x) x.begin(),x.end()

// less is more
using namespace std;
using ll = long long;

void solve() {
  int N; cin>>N;
  vector<int> a(N);
  map<int, int> mp;
  for(int i=0; i<N; i++) {
    cin>>a[i];
    mp[a[i]]++;
  }
  ll ans = 0;
  vector<pair<int, int>> ps;
  for(auto [x, y]:mp) {
    ps.push_back({x, y});
  }
  N = ps.size();
  for(int i=0; i<N; i++) {
    auto [x, y] = ps[i];
    for(int j=i+1; j<N; j++) {
      auto [x1, y1] = ps[j];
      ans += 1ll*(x-x1)*(x-x1)*y1*y;
    }
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
