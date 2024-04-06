/**
 *    author: mralves 
 *    created: 07-11-2023 17:57:55       
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

void solve() {
  int H, W;
  cin>>H>>W;

  vector<vector<int>> grid(H, vector<int>(W));
  int mi = 1e9;
  for(int i=0; i<H; i++) {
    for(int j=0; j<W; j++) {
      cin>>grid[i][j];
      mi = min(mi, grid[i][j]);
    }
  }
  ll ans = 0;
  for(int i=0; i<H; i++) {
    for(int j=0; j<W; j++) {
      ans += grid[i][j]-mi;
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
