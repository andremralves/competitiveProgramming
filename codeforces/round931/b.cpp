/**
 *    author: mralves 
 *    created: 01-03-2024 11:32:42       
**/
#include <bits/stdc++.h>

#define all(x) x.begin(),x.end()

// less is more
using namespace std;
using ll = long long;

void solve() {
  int N; cin>>N;
  int ans = 0;
  vector<int> d = {15, 10, 6, 3, 1};

  if(N-15 > 15) {
    int t = (N-15)/15;
    N -= t*15;
    ans += t;
  }

  int mn = 1000;
  auto dfs = [&](auto &&self, int v, int cnt) {
    if(v == 0) {
      mn = min(mn, cnt);
      return;
    }
    int t = 0;
    for(auto x:d) {
      if(t == 2) continue;
      if(v >= x) {
        self(self, v-x, cnt+1);
        t++;
      }
    }
  };
  dfs(dfs, N, 0);
  cout<<ans+mn<<"\n";
}

int main () {
  std::ios::sync_with_stdio(false);
  std::cin.tie(nullptr);

  int t = 1;
  cin>>t;
  while (t--) solve();
  return 0;
}
