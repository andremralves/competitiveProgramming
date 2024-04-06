/**
 *    author: mralves 
 *    created: 06-01-2024 08:57:59       
**/
#include <bits/stdc++.h>

#define pb(x) push_back(x)
#define all(x) x.begin(),x.end()

using namespace std;
using ll = long long;
using pii = pair<int, int>;

ll ceil(ll a, ll b) {return a % b == 0 ? a / b : a / b + 1;}
vector<pii> dir4 = {{1, 0}, {0, 1}, {-1, 0}, {0, -1}};
vector<pii> dir8 = {{1, 0}, {1, 1}, {0, 1}, {-1, 1}, {-1, 0}, {-1, -1}, {0, -1}, {1, -1}};

void solve() {
  int N; cin>>N;
  int cnt = 1;
  int x = 0, y = 0;
  vector<vector<int>> grid(N, vector<int>(N));
  int round = 0;
  grid[N/2][N/2] = -1;
  while(x != N/2 and y != N/2) {
    // r
    while(y < N-round) {
      grid[x][y++] = cnt++;
    }
    y--; x++;
    // d 
    while(x < N-round) {
      grid[x++][y] = cnt++;
    }
    x--; y--;
    // l
    while(y >= round) {
      grid[x][y--] = cnt++;
    }
    y++; x--;
    // d
    while(x > round) {
      grid[x--][y] = cnt++;
    }
    round++;
    x++, y++;
  }
  for(auto vec:grid) {
    for(auto a:vec) {
      if(a == -1)
        cout<<"T ";
      else
        cout<<a<<" ";
    }
    cout<<"\n";
  }
}

int main ()
{
    //std::ios::sync_with_stdio(false);
    //std::cin.tie(nullptr);

    int t = 1;
    while (t--) solve();
    return 0;
}
