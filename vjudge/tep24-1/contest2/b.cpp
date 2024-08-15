#include <bits/stdc++.h>

#define all(x) x.begin(),x.end()

// less is more
using namespace std;
using ll = long long;

const int INF = 1e9+10;
void solve() {
  int N; 
  cin>>N;
  vector<pair<int, int>> a(N), b(N);
  for(int i=0; i<N; i++) {
    int x, y;
    cin>>x>>y;
    a[i] = {x, i};
    b[i] = {y, i};
  }
  sort(a.begin(), a.end());
  sort(b.begin(), b.end());
  int ans = INF;
  for(int i=0; i<N; i++) {
    auto [x, y] = a[i];
    auto [x1, y1] = b[i];
    if(y != y1) {
      ans = min(max(x1, x), ans);
    } else {
      ans = min(x1+x, ans);
      if(i < N-1) {
        ans = min(ans, max(x, b[i+1].first));
        ans = min(ans, max(x1, a[i+1].first));
      }
    }
  }
  cout<<ans<<"\n";
}

int main () {
  std::ios::sync_with_stdio(false);
  std::cin.tie(nullptr);

  int t = 1;
  //cin>>t;
  while (t--) solve();
  return 0;
}
