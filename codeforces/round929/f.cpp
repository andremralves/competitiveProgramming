/**
 *    author: mralves 
 *    created: 27-02-2024 11:34:34       
**/
#include <bits/stdc++.h>

#define all(x) x.begin(),x.end()

// less is more
using namespace std;
using ll = long long;

vector<pair<int, int>> dir3 = {{1, 0}, {-1, 0}, {0, 1}};

const int INF = 1e9+10;
void solve() {
  int N, M;
  cin>>N>>M;
  vector<vector<int>> grid(N, vector<int>(M));
  for(int i=0; i<N; i++) {
    for(int j=0;j<M; j++) {
      cin>>grid[i][j];
    }
  }
  vector<vector<int>> dp(N, vector<int>(M, INF));
  vector<pair<int, int>> que;
  que.push_back({0, 0});
  dp[0][0] = 0;
  for(int t=0; t<(int)que.size(); t++) {
    auto [i, j] = que[t];
    //cout<<i<<" "<<j<<" "<<dp[i][j]<<"\n";
    for(auto [x, y]:dir3) {
      if(j != M-1 and x == -1) continue;
      int ix = i+x, jy = j+y;
      if(ix < 0) ix = N-1;
      if(ix >= N) ix = 0;
      if(jy >= M) continue;
      if(j != M-1 and i-1 == ix) continue;
      if(grid[(ix+dp[i][j]+1)%N][jy] == 1) continue;
      if(i+1 == ix and grid[(ix+dp[i][j])%N][jy] == 1) continue;
      if(dp[i][j]+1 < dp[ix][jy]) {
        que.push_back({ix, jy});
        dp[ix][jy] = dp[i][j]+1;
      }
    }
  }
  if(dp[N-1][M-1] == INF) {
    cout<<-1<<"\n";
  } else {
    cout<<dp[N-1][M-1]<<"\n";
  }
}

int main () {
  std::ios::sync_with_stdio(false);
  std::cin.tie(nullptr);

  int t = 1;
  cin>>t;
  while (t--) solve();
  return 0;
}
