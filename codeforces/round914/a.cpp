/**
 *    author: mralves 
 *    created: 09-12-2023 13:10:18       
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
  int a, b;
  int kx, ky, qx, qy;
  cin>>a>>b;
  cin>>kx>>ky;
  cin>>qx>>qy;

  vector<int> dirs = {1, -1};
  set<pii> st;
  auto dfs = [&](auto &&self, int x, int y, int m, int px, int py) {
    if(m == 2) {
      if(x == qx and y == qy)
        st.emplace(px, py);
      return;
    }
    for(auto x1: dirs) {
      for(auto y1: dirs) {
        self(self, x+a*x1, y+b*y1, m+1, x, y);
        self(self, x+b*x1, y+a*y1, m+1, x, y);
      }
    }
  };

  dfs(dfs, kx, ky, 0, 0, 0);
  cout<<st.size()<<"\n";
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
