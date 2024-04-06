#include <bits/stdc++.h>
using namespace std;

int main() {
  int N, K;
  cin>>N>>K;

  vector<vector<int>> dp(N, vector<int>(K));
  for(int i=1; i<K; i++) {
    dp[0][i] = 1;
  }

  for(int i=1; i<N; i++) {
    for(int j=0; j<K; j++) {
      for(int k=0; k<K; k++) {
        if(j or k)
          dp[i][j] += dp[i-1][k];
      }
    }
  }
  cout<<accumulate(dp[N-1].begin(), dp[N-1].end(), 0ll)<<"\n";
  return 0;
}
