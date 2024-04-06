/**
 *    author: mralves 
 *    created: 10-01-2024 23:05:08       
**/
#include <bits/stdc++.h>

#define all(x) x.begin(),x.end()

// less is more
using namespace std;
using ll = long long;

const int INF = 1e9+5;

void solve() {
  int N; cin>>N;
  vector<int> a(N), hist(5000);
  for(int i=0; i<N; i++) {
    cin>>a[i];
    if(a[i]<5000)
      hist[a[i]]++;
  }

  sort(all(a));
  N = unique(all(a))-a.begin();
  int mex = N;
  for(int i=0; i<N; i++) {
    if(a[i] != i) {
      mex = i;
      break;
    }
  }

  vector<vector<ll>> dp(N+1, vector<ll>(2));
  for(int i=N; i>=0; i--) {
    if(hist[i] == 0) continue;
    dp[i][0] = (hist[i]-1)*mex+i;
    dp[i][1] = hist[i];
    ll minj = INF, pos = 0;
    for(int j=i+1; j<N+1; j++) {
      if(dp[j][0]+(hist[i]-1)*j+i < minj) {
        minj = dp[j][0]+(hist[i]-1)*j+i;
        pos = dp[j][1]+hist[i];
      }
      //if(dp[j][0]+(hist[i]-1)*j+i < dp[i][0]+dp[j][1]*i) {
      //  dp[i][0] = dp[j][0]+(hist[i]-1)*j+i;
      //  dp[i][1] = dp[j][1]+hist[i];
      //}
    }
    if(minj < dp[i][0]+pos*i) {
      dp[i][0] = minj;
      dp[i][1] = pos;
    }
    //cout<<dp[i][0]<<" "<<dp[i][1]<<"\n";
  }
  cout<<dp[0][0]<<"\n";
}

int main () {
  std::ios::sync_with_stdio(false);
  std::cin.tie(nullptr);

  int t = 1;
  cin>>t;
  while (t--) solve();
  return 0;
}
