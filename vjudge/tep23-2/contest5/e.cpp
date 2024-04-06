#include<bits/stdc++.h>
using namespace std;

int main() {
  std::ios::sync_with_stdio(false);
  std::cin.tie(nullptr);
  int N, M;
  cin>>N>>M;
  vector<int> a(N), b(M);
  for(int i=0; i<N; i++) cin>>a[i];
  for(int i=0; i<M; i++) cin>>b[i];

  const int INF = 1e6+10;
  vector<vector<int>> dp(N+1, vector<int>(M+1, INF));
  dp[0][0] = 0;
  for(int i=0; i<=N; i++) {
    for(int j=0; j<=M; j++) {
      if(i > 0)
        dp[i][j] = min(dp[i][j], dp[i-1][j]+1);
      if(j > 0)
        dp[i][j] = min(dp[i][j], dp[i][j-1]+1);
      if(i > 0 and j > 0)
        dp[i][j] = min(dp[i][j], dp[i-1][j-1]+(a[i-1]!=b[j-1]));
    }
  }
  cout<<dp[N][M]<<"\n";

  return 0;
}
