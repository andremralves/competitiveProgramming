/**
 *    author: mralves 
 *    created: 26-01-2024 00:17:47       
**/
#include <bits/stdc++.h>

#define all(x) x.begin(),x.end()

// less is more
using namespace std;
using ll = long long;

void solve() {
  int N, K;
  cin>>N>>K;
  vector<vector<int>> grid(N, vector<int>(N));
  for(int i=0; i<N; i++) {
    for(int j=0; j<N; j++) {
      cin>>grid[i][j];
    }
  }

  int cnt = 0;
  for(int i=0; i<(N+1)/2; i++) {
    for(int j=0; j<N; j++) {
      if(i == N-i-1 and j >= N/2) break;
      if(grid[i][j] != grid[N-i-1][N-j-1]) {
        cnt++;
      }
    }
  }

  if(cnt <= K and (N%2 or (K-cnt)%2==0)) {
    cout<<"YES\n";
  } else {
    cout<<"NO\n";
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
