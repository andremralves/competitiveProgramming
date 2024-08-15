#include <bits/stdc++.h>

#define all(x) x.begin(),x.end()

// less is more
using namespace std;
using ll = long long;

void solve() {
  vector<vector<int>> grid(3, vector<int>(3));
  for(int i=0; i<3; i++) {
    for(int j=0; j<3; j++) {
      cin>>grid[i][j];
    }
  }
  int N; cin>>N;
  while(N--) {
    int x; cin>>x;
    for(auto &row:grid) {
      for(auto &v:row) {
        if(v == x) v = 0;
      }
    }
  }
  bool ok = false;
  for(int i=0; i<3; i++) {
    int cnt = 0;
    for(int j=0; j<3; j++) {
      if(grid[i][j] == 0) cnt++;
    }
    if(cnt == 3) ok = true;
  }
  for(int i=0; i<3; i++) {
    int cnt = 0;
    for(int j=0; j<3; j++) {
      if(grid[j][i] == 0) cnt++;
    }
    if(cnt == 3) ok = true;
  }
  if(grid[1][1] == grid[0][0] and grid[2][2] == grid[1][1] and grid[1][1] == 0)
    ok = true;
  if(grid[1][1] == grid[0][2] and grid[2][0] == grid[1][1] and grid[1][1] == 0)
    ok = true;

  cout<<(ok?"Yes\n":"No\n");
}

int main () {
  std::ios::sync_with_stdio(false);
  std::cin.tie(nullptr);

  int t = 1;
  while (t--) solve();
  return 0;
}
