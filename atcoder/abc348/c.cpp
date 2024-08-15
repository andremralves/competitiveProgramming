#include <bits/stdc++.h>

#define all(x) x.begin(),x.end()

// less is more
using namespace std;
using ll = long long;

const ll INF = 1e17;
void solve() {
  int N; cin>>N;
  map<int, int> mp;
  for(int i=0; i<N; i++) {
    int a, b;
    cin>>a>>b;
    if(mp.count(b) == 0) mp[b] = a;
    else mp[b] = min(a, mp[b]);
  }
  int mx = 0;
  for(auto [a, b]:mp) {
    mx = max(mx, b);
  }
  cout<<mx<<"\n";
}

int main () {
  std::ios::sync_with_stdio(false);
  std::cin.tie(nullptr);

  int t = 1;
  while (t--) solve();
  return 0;
}
