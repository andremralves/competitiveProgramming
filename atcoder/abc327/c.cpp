/**
 *    author: mralves 
 *    created: 04-11-2023 08:56:08       
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

bool checkSub(vector<vector<int>> grid, int s, int e) {
  set<int> st;
  for(int i=0; i<3; i++) {
    for(int j=0; j<3; j++) {
      st.insert(grid[j+s][i+e]);
    }
  }
  if(st.size() != 9) {
    return false;
  }
  return true;
}

void solve() {
  int N = 9;
  vector<vector<int>> grid(N, vector<int>(N));
  for(int i=0; i<N; i++) {
    for(int j=0; j<N; j++) {
      cin>>grid[i][j];
    }
  }

  for(int i=0; i<N; i++) {
    set<int> st;
    for(int j=0; j<N; j++) {
      st.insert(grid[i][j]);
    }
    if(st.size() != 9) {
      cout<<"No\n";
      return;
    }
  }
  for(int i=0; i<N; i++) {
    set<int> st;
    for(int j=0; j<N; j++) {
      st.insert(grid[j][i]);
    }
    if(st.size() != 9) {
      cout<<"No\n";
      return;
    }
  }

  vector<int> a = {0, 3, 6};

  for(auto x: a) {
    for(auto y: a) {
      if(!checkSub(grid, x, y)) {
          cout<<"No\n";
          return;
      }
    }
  }
  cout<<"Yes\n";
}

int main ()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int t = 1;
    while (t--) solve();
    return 0;
}
