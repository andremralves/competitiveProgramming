#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  int N; cin>>N;
  vector<vector<int>> memo(N+1, vector<int>(3, -1));
  auto dfs = [&](auto &&self, int n, int color, int prev) -> ll {
    if(n == 1 and color == 0) return 1;
    if(n == 1 and color == 1) return 0;
    if(n == 1 and color == 2) return 1;
    ll sum = 0;
    for(int i=0; i<3; i++) {
      if(color == i) continue;
      if(color == 1 and prev == i) {
        continue;
      }
      if(memo[n-1][i] != -1)
        sum += memo[n-1][i];
      else
        sum += self(self, n-1, i, color);
    }
    memo[n][color] = sum;
    return sum;
  };

  ll ans = 0;
  for(int i=0; i<3; i++) {
    if(i == 1) continue;
    ans += dfs(dfs, N, i, -1);
  }
  cout<<ans<<"\n";
  return 0;
}
