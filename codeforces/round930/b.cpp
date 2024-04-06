/**
 *    author: mralves 
 *    created: 29-02-2024 11:33:58       
**/
#include <bits/stdc++.h>

#define all(x) x.begin(),x.end()

// less is more
using namespace std;
using ll = long long;

void solve() {
  int N; cin>>N;
  vector<string> grid(2);
  for(int i=0; i<2; i++) {
    cin>>grid[i];
  }
  string ans;
  int cnt = 1;
  for(int i=0; i<N-1; i++) {
    if(grid[1][i] < grid[0][i+1]) {
      ans = grid[0].substr(0, i+1);
      ans += grid[1].substr(i);
      break;
    } else if(grid[1][i] > grid[0][i+1]) {
      cnt = 1;
    } else {
      cnt++;
    }
  }
  if(ans.size() == 0) {
    ans = grid[0];
    ans += grid[1].back();
  }
  cout<<ans<<"\n";
  cout<<cnt<<"\n";
}

int main () {
  std::ios::sync_with_stdio(false);
  std::cin.tie(nullptr);

  int t = 1;
  cin>>t;
  while (t--) solve();
  return 0;
}
