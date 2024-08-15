#include <bits/stdc++.h>

#define all(x) x.begin(),x.end()

// less is more
using namespace std;
using ll = long long;

void solve() {
  int N, C, D;
  cin>>N>>C>>D;
  map<int, int> mp;
  for(int i=0; i<N*N; i++) {
    int x; cin>>x;
    mp[x]++;
  }
  vector<vector<int>> grid(N, vector<int>(N));
  grid[0][0] = mp.begin()->first;
  bool ok = true;
  for(int i=0; i<N; i++) {
    if(i) {
      grid[i][0] = grid[i-1][0]+C;
      if(mp[grid[i][0]] == 0) ok = false;
      else mp[grid[i][0]]--;
    }
    for(int j=1; j<N; j++) {
      if(j) {
        grid[i][j] = grid[i][j-1]+D;
        if(mp[grid[i][j]] == 0) ok = false;
        else mp[grid[i][j]]--;
      }
    }
  }
  cout<<(ok?"Yes\n":"No\n");
}

int main () {
  std::ios::sync_with_stdio(false);
  std::cin.tie(nullptr);

  int t = 1;
  cin>>t;
  while (t--) solve();
  return 0;
}
