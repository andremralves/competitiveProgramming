/**
 *    author: mralves 
 *    created: 30-01-2024 08:51:32       
**/
#include <bits/stdc++.h>

#define all(x) x.begin(),x.end()

// less is more
using namespace std;
using ll = long long;

void solve() {
  int N; cin>>N;
  vector<int> a(N*N);
  map<int, int> mp;
  for(int i=0; i<N*N; i++) {
    cin>>a[i];
    mp[a[i]]++;
  }

  bool ok = true;
  vector<vector<int>> grid(N, vector<int>(N));
  for(int i=0; i<(N+1)/2; i++) {
    for(int j=0; j<(N+1)/2; j++) {
      int take = 0;
      if(N%2) {
        if(i == N/2 and j== N/2) {
          take = 1;
        } else if(i == N/2) {
          take = 2;
        } else if(j == N/2) {
          take = 2;
        } else {
          take = 4;
        }
      } else {
        take = 4;
      }
      bool found = false; 
      int val = 0;
      for(auto &[x, y]:mp) {
        if(y >= take) {
          y-= take;
          val = x;
          found = true;
          break;
        }
      }
      //cout<<found<<" "<<val<<"\n";
      if(found) {
        grid[i][j] = val;
        if(take == 2) {
          if(i == N/2) {
            grid[i][N-j-1] = val;
          } else {
            grid[N-i-1][j] = val;
          }
        }
        if(take == 4) {
          grid[i][N-j-1] = val;
          grid[N-i-1][N-j-1] = val;
          grid[N-i-1][j] = val;
        }
      } else {
        ok = false;
      }
    }
  }

  if(ok) {
    cout<<"YES\n";
    for(auto row:grid) {
      for(auto x:row) {
        cout<<x<<" ";
      }
      cout<<"\n";
    }
  } else {
    cout<<"NO\n";
  }
}

int main () {
  std::ios::sync_with_stdio(false);
  std::cin.tie(nullptr);

  int t = 1;
  while (t--) solve();
  return 0;
}
