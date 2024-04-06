/**
 *    author: mralves 
 *    created: 19-02-2024 11:32:51       
**/
#include <bits/stdc++.h>

#define all(x) x.begin(),x.end()

// less is more
using namespace std;
using ll = long long;

void solve() {
  int N; cin>>N;
  vector<string> grid(N);
  bool tri = false;
  for(int i=0; i<N; i++) {
    cin>>grid[i];
    if(count(grid[i].begin(), grid[i].end(), '1') == 1) tri = true;
  }
  if(tri) {
    cout<<"TRIANGLE\n";
  } else {
    cout<<"SQUARE\n";
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
