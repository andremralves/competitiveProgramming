#include <bits/stdc++.h>
using namespace std;

int dx[] = {1, -1, 0, 0};
int dy[] = {0, 0, -1, 1};
int R, C;
vector<vector<int>> grid;
int work(int i, int j) {
  vector<vector<int>> used(R, vector<int>(C));
  priority_queue<pair<int, int>,
    vector<pair<int, int>>,
    greater<pair<int, int>>> pq;
  pq.push({grid[i][j], i*C+j});
  int cnt = 0;
  used[i][j] = 1;
  while(!pq.empty()) {
    auto [v, pos] = pq.top();
    pq.pop();
    i = pos/C, j = pos%C;
    cnt++;
    // get neighbors 
    for(int t=0; t<4; t++) {
      int x = dx[t]+i, y = dy[t]+j;
      if(x >= 0 and x < R and y >= 0 and y < C and !used[x][y]) {
        used[x][y] = 1;
        pq.push({grid[x][y], x*C+y});
      }
    }
    while(!pq.empty() and pq.top().first < v) pq.pop();
  }
  return cnt;

}

int main() {
  cin>>R>>C;
  grid.assign(R, vector<int>(C));
  for(int i=0; i<R; i++) {
    for(int j=0; j<C; j++) {
      cin>>grid[i][j];
    }
  }

  int ans = 0;
  for(int i=0; i<R; i++) {
    for(int j=0; j<C; j++) {
      ans = max(work(i, j), ans);
    }
  }
  cout<<ans<<"\n";
  return 0;
}
