#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  int N;
  int cnt = 0;
  while(cin>>N) {
    cnt++;
    vector<ll> a(N);
    for(int i=0; i<N; i++) {
      cin>>a[i];
    }

    vector<pair<ll, ll>> dp(N+1);
    dp[0] = {0, 0};
    for(int i=1; i<=N; i++) {
      if(i%2) {
        dp[i] = make_pair(dp[i-1].second + a[i-1], dp[i-1].first);
        continue;
      }
      if(dp[i-1].second + a[i-1] > dp[i-1].first) {
        dp[i] = make_pair(dp[i-1].second + a[i-1], dp[i-1].first);
      } else {
        dp[i] = make_pair(dp[i-1].first, dp[i-1].second + a[i-1]);
      }
    }
    cout<<dp[N].first<<"\n";
  }
  cout<<cnt<<"\n";
  return 0;
}
