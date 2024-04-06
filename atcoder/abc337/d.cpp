/**
 *    author: mralves 
 *    created: 20-01-2024 08:59:03       
**/
#include <bits/stdc++.h>

#define all(x) x.begin(),x.end()

// less is more
using namespace std;
using ll = long long;

const int INF = 1e9+5;
void solve() {
  int H, W, X;
  cin>>H>>W>>X;

  vector<string> grid(H);
  for(int i=0; i<H; i++) {
    cin>>grid[i];
  }

  auto calc_win = [&](vector<char> win) {
    int op = 0, best = INF;
    for(int i=0; i<X; i++) {
      if(win[i] == '.') op++;
    }
    best = op;
    for(int i=X; i<(int)win.size(); i++) {
      if(win[i] == '.') op++;
      if(win[i-X] == '.') op--;
      best = min(op, best);
    }
    return best;
  };

  int ans = INF;
  vector<vector<int>> used(H, vector<int>(W));
  vector<vector<int>> used2(H, vector<int>(W));
  for(int i=0; i<H; i++) {
    for(int j=0; j<W; j++) {
      if(grid[i][j] == 'x') continue;
      // full right
      if(!used[i][j]) {
        int k = j;
        vector<char> win;
        while(k < W and grid[i][k] != 'x') {
          used[i][k] = 1;
          win.emplace_back(grid[i][k]);
          k++;
        }
        //cout<<"k-j: "<<k-j<<"\n";
        if((int)win.size() >= X) {
          ans = min(ans, calc_win(win));
        }
      }
      // full down
      if(!used2[i][j]){
        int k = i;
        vector<char> win;
        while(k < H and grid[k][j] != 'x') {
          used2[k][j] = 1;
          win.emplace_back(grid[k][j]);
          k++;
        }
        if((int)win.size() >= X) {
          ans = min(ans, calc_win(win));
        }
      }
    }
  }

  if(ans == INF) ans = -1;
  cout<<ans<<"\n";

}

int main () {
  std::ios::sync_with_stdio(false);
  std::cin.tie(nullptr);

  int t = 1;
  while (t--) solve();
  return 0;
}
