/**
 *    author: mralves 
 *    created: 19-02-2024 01:50:47       
**/
#include <bits/stdc++.h>

#define all(x) x.begin(),x.end()

// less is more
using namespace std;
using ll = long long;

int H, W, N;
string t;
vector<string> grid;
bool follow_path(int i, int j) {
  for(auto c:t) {
    if(grid[i][j] == '#') return false;
    if(c == 'L') j--;
    else if(c == 'R') j++;
    else if(c == 'U') i--;
    else i++;
    if(i < 0 or j < 0  or i>=H or j>=W) {
      return false;
    }
  }
  if(grid[i][j] == '#') return false;
  return true;
}

void solve() {
  cin>>H>>W>>N;
  cin>>t;
  grid.assign(H, {});
  for(int i=0; i<H; i++) {
    cin>>grid[i];
  }

  int ans = 0;
  for(int i=0; i<H; i++) {
    for(int j=0; j<W; j++) {
      if(follow_path(i, j)) ans++;
    }
  }
  cout<<ans<<"\n";
}

int main () {
  std::ios::sync_with_stdio(false);
  std::cin.tie(nullptr);
  solve();
  return 0;
}
