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

  vector<string> grid(N);
  for(int i=0; i<N; i++) {
    cin>>grid[i];
  }

  vector<string> rotated(N, string(N, ' '));
  int ans = 0;
  bool has = true;
  while(has) {
    has = false;
    for(int i=0; i<N; i++) {
      for(int j=0; j<N; j++) {
        //rotated[j][N-i-1] = grid[i][j];
        if(grid[j][N-i-1] > grid[i][j]) {
          has = true;
          ans += grid[j][N-i-1]-grid[i][j];
          grid[i][j] = grid[j][N-i-1];
        }
      }
    }
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
