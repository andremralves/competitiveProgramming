
/**
 *    author: mralves 
 *    created: 27-01-2024 01:39:21       
**/
#include <bits/stdc++.h>

#define all(x) x.begin(),x.end()

// less is more
using namespace std;
using ll = long long;

void solve() {
  int N; cin>>N;
  vector<vector<int>> grid(N, vector<int>(N));
  int l = 1, r = N*N;
  bool alt = 1;
  for(int i=0; i<N; i++) {
    for(int j=0; j<N; j++) {
      if(alt) 
        grid[i][j] = r--;
      else
        grid[i][j] = l++;
      alt ^= 1;
    }
    if(i&1)
      reverse(all(grid[i]));
  }
  for(auto row:grid) {
    for(auto x:row) {
      cout<<x<<" ";
    }
    cout<<"\n";
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
