#include <bits/stdc++.h>

using namespace std;
using ll = long long;

const int MAXN = 51;
ll dp[MAXN][MAXN][MAXN*MAXN];

int main() {
  int N, A;
  cin>>N>>A;

  vector<int> a(N);
  for(int i=0; i<N; i++) {
    cin>>a[i];
  }

  dp[0][0][0] = 1;
  for(int i=1; i<=N; i++) {
    for(int j=0; j<=i; j++) {
      for(int k=0; k<=50*50; k++) {
        dp[i][j][k] += dp[i-1][j][k];
        if(j>0 and k-a[i-1]>=0)
          dp[i][j][k] += dp[i-1][j-1][k-a[i-1]];
      }
    }
  }

  ll ans = 0;
  for(int i=1; i<=N; i++) {
    ans += dp[N][i][A*i];
  }
  cout<<ans<<"\n";

  return 0;
}


