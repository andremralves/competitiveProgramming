#include <bits/stdc++.h>

#define all(x) x.begin(),x.end()

// less is more
using namespace std;
using ll = long long;

vector<pair<int, int>> dir4 = {{0, 1}, {1, 0}, {0, -1}, {-1, 0}};

void solve() {
  int H, W;
  cin>>H>>W;
  vector<string> grid(H);
  for(int i=0; i<H; i++) {
    cin>>grid[i];
  }
  int sx= 0, sy=0;
  int tx= 0, ty= 0;
  for(int i=0; i<H; i++) {
    for(int j=0; j<W; j++) {
      if(grid[i][j] == 'S')
        sx = i, sy = j;
      if(grid[i][j] == 'T')
        tx = i, ty = j;
    }
  }
  int N; cin>>N;
  vector<vector<int>> energy(H, vector<int>(W));
  for(int i=0; i<N; i++) {
    int r, c, e;
    cin>>r>>c>>e;
    r--, c--;
    energy[r][c] = e;
  }


  vector<array<int, 3>> que;
  vector<int> used(N);
  que.push_back({sx, sy, energy[sx][sy]});
  vector<vector<int>> color(H, vector<int>(W));
  for(int t=0; t<(int)que.size(); t++) {
    auto [i, j, cur] = que[t];
    if(!used[i])
    cur = energy[i][j];
    cout<<i<<" "<<j<<" "<<cur<<"\n";
    if(cur == 0) continue;
    for(auto [x, y]:dir4) {
      int ix = x+i, jy = y+j;
      if(ix < 0 or jy < 0 or ix >= H or jy >= W) continue;
      if(grid[ix][jy] == '#') continue;
      if(color[ix][jy] < N) {
        color[ix][jy]++;
        que.push_back({ix, jy, cur-1});
      }
    }
  }
  if(color[tx][ty]) cout<<"Yes\n";
  else cout<<"No\n";
}

int main () {
  std::ios::sync_with_stdio(false);
  std::cin.tie(nullptr);

  int t = 1;
  while (t--) solve();
  return 0;
}
