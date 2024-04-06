#include <bits/stdc++.h>
using namespace std;

vector<pair<int, int>> dir4 = {{1, 0}, {0, 1}, {-1, 0}, {0, -1}};

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  int N, M, K;
  cin>>N>>M>>K;
  vector<string> grid(N);
  for(int i=0; i<N; i++) {
    cin>>grid[i];
  }

  vector<vector<int>> color(N, vector<int>(M));
  int cur_color = 1;
  auto dfs = [&](auto &&self, int i, int j) {
    if(grid[i][j] == '*') return 1;
    color[i][j] = cur_color;
    int cnt = 0;
    for(auto [x, y]:dir4) {
      int ii = x+i, jj = y+j;
      if(ii < 0 or jj < 0) continue;
      if(ii >= N or jj >= M) continue;
      if(color[ii][jj]) continue;
      cnt += self(self, ii, jj); 
    }
    return cnt;
  };

  map<int, int> col_cnt;
  for(int i=0; i<N; i++) {
    for(int j=0; j<M; j++) {
      if(grid[i][j] == '.' and !color[i][j]) {
        int cnt = dfs(dfs, i, j);
        col_cnt[cur_color] = cnt;
        cur_color++;
      }
    }
  }

  while(K--) {
    int i, j;
    cin>>i>>j;
    i--, j--;
    cout<<col_cnt[color[i][j]]<<"\n";
  }
  return 0;
}
