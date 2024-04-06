/**
 *    author: mralves 
 *    created: 23-12-2023 16:53:36       
**/
#include <bits/stdc++.h>

#define pb(x) push_back(x)
#define all(x) x.begin(),x.end()

using namespace std;
using ll = int64_t;
using pii = pair<int, int>;

ll ceil(ll a, ll b) {return a % b == 0 ? a / b : a / b + 1;}
vector<pii> dir4 = {{1, 0}, {0, 1}, {-1, 0}, {0, -1}};
vector<pii> dir8 = {{1, 0}, {1, 1}, {0, 1}, {-1, 1}, {-1, 0}, {-1, -1}, {0, -1}, {1, -1}};

int H, W;
int used[H][W];
void dfs(int i, int j) {
  if(i<0 and i>=H and j<0 and j>=W) return;
  if(used[i][j]) return;
  used[i][j] = 1;


}

void solve() {
  cin>>H>>W;

  vector<vector<char>> grid(H, vector<char>W);
  for(int i=0; i<H; i++) {
    for(int j=0; j<W; j++) {
      cin>>grid[i][j];
    }
  }

}

int main ()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int t = 1;
    cin>>t;
    while (t--) solve();
    return 0;
}
