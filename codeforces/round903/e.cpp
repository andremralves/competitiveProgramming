/**
 *    author: mralves 
 *    created: 08-01-2024 21:25:24       
**/
#include <bits/stdc++.h>

#define all(x) x.begin(),x.end()

// less is more
using namespace std;
using ll = long long;

void solve() {
  int N; cin>>N;
  vector<int> a(N);
  for(int i=0; i<N; i++) {
    cin>>a[i];
  }

  reverse(all(a));
  vector<int> dp(N, N);
  for(int i=0; i<N; i++) {
    if(a[i] == i)
      dp[i] = 0;
    if(a[i] > i)
      dp[i] = min(i+1, dp[i]);
    if(a[i] < i)
      dp[i] = min(dp[i-a[i]-1], dp[i]);
    if(i > 0)
      dp[i] = min(dp[i], dp[i-1]+1);
  }

  //for(auto x:dp) {
  //  cout<<x<<" ";
  //}
  //cout<<"\n";

  int ans = N;
  for(int i=0; i<N; i++) {

    ans = min(dp[i]+N-i-1, ans);
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
