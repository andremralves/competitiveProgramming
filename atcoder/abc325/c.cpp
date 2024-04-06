/**
 *    author: mralves 
 *    created: 21-10-2023 08:58:57       
**/
#include <bits/stdc++.h>

#define pb(x) push_back(x)
#define all(x) x.begin(),x.end()

using namespace std;
using ll = int64_t;
using ii = pair<int, int>;

ll ceil(ll a, ll b) {return a % b == 0 ? a / b : a / b + 1;}
vector<ii> dir4 = {{1, 0}, {0, 1}, {-1, 0}, {0, -1}};
vector<ii> dir8 = {{1, 0}, {1, 1}, {0, 1}, {-1, 1}, {-1, 0}, {-1, -1}, {0, -1}, {1, -1}};

void solve() {
  int H, W;
  cin>>H>>W;

  vector<string> grid(H);
  for(int i=0; i<H; i++) {
    cin>>grid[i];
  }

  vector<vector<int>> used(H, vector<int>(W));
  auto dfs = [&](auto &&dfs, int i, int j) {
    if(used[i][j]) return;
    used[i][j] = true;

    for(auto [x, y] : dir8) {
      if(i+x < 0 or i+x >= H or j+y < 0 or j+y >= W) continue;
      if(grid[i+x][j+y] == '#')
        dfs(dfs, i+x, j+y);
    }
  };

  int ans = 0;
  for(int i=0; i<H; i++) {
    for(int j=0; j<W; j++) {
      if(!used[i][j] and grid[i][j] != '.') {
        dfs(dfs, i, j);
        ans++;
      }
    }
  }
  cout<<ans<<"\n";
}

int main ()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int t = 1;
    while (t--) solve();
    return 0;
}
