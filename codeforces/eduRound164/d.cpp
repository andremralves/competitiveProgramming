#include <bits/stdc++.h>

#define all(x) x.begin(),x.end()

// less is more
using namespace std;
using ll = long long;

int N;
int a[5005];
tuple<ll, int, int> memo[5005];
const int MOD = 998244353;
tuple<ll, int, int> dfs(int i) {
  int cnt = a[i], mx = a[i];
  int ans = 0;
  for(int j=i+1; j<N; j++) {
    int res, c, m;
    if(memo[j][0] != -1) {
      [res, c, m] = memo[j];
      ans += res;
    } else {
      [c, m] = dfs(j);
    }
    cnt += c; m = max(m, mx);
  }
  ans += max(mx, (cnt+1)/2);
  memo[i] = {ans, cnt, mx};
  return {cnt, mx};
}

void solve() {
  cin>>N; 
  for(int i=0; i<5005; i++) memo[i] = {-1, -1, -1};
  for(int i=0; i<N; i++) {
    cin>>a[i];
  }
  dfs(-1);
  cout<<memo[0][0]<<"\n";
}

int main () {
  std::ios::sync_with_stdio(false);
  std::cin.tie(nullptr);

  int t = 1;
  //cin>>t;
  while (t--) solve();
  return 0;
}
