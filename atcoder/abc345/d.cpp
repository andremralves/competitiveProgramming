#include <bits/stdc++.h>
using namespace std;

int main() {
  int N, H, W;
  cin>>N>>H>>W;
  vector<int> X(N), Y(N);
  for(int i=0; i<N; i++) {
    cin>>X[i]>>Y[i];
  }

  bool ok = false;
  vector<vector<int>> grid(H, vector<int>(W, 0));
  vector<bool> used(N);
  auto dfs = [&](auto &&self) {
    int i, j;
    bool found = false;
    for(i=0; i<H; i++) {
      for(j=0; j<W; j++) {
        if(grid[i][j] == 0) {
          found = true;
          break;
        }
      }
      if(found) break;
    }
    if(i == H) {
      ok = true;
      return;
    }
    for(int t=0; t<N; t++) {
      if(!used[t]) {
        if(X[t]+i<=H and Y[t]+j<=W) {
          bool has = false;
          for(int k=i; k<X[t]+i; k++) {
            for(int l=j; l<Y[t]+j; l++) {
              if(grid[k][l] == 1) {
                has = true;
              }
            }
          }
          if(has) continue;
          for(int k=i; k<X[t]+i; k++) {
            for(int l=j; l<Y[t]+j; l++) {
              grid[k][l] = 1;
            }
          }
          used[t] = 1;
          self(self);
          used[t] = 0;
          for(int k=i; k<X[t]+i; k++) {
            for(int l=j; l<Y[t]+j; l++) {
              grid[k][l] = 0;
            }
          }
        }
        if(Y[t]+i<=H and X[t]+j<=W) {
          bool has = false;
          for(int k=i; k<Y[t]+i; k++) {
            for(int l=j; l<X[t]+j; l++) {
              if(grid[k][l] == 1) has = true;
            }
          }
          if(has) continue;
          for(int k=i; k<Y[t]+i; k++) {
            for(int l=j; l<X[t]+j; l++) {
              grid[k][l] = 1;
            }
          }
          used[t] = 1;
          self(self);
          used[t] = 0;
          for(int k=i; k<Y[t]+i; k++) {
            for(int l=j; l<X[t]+j; l++) {
              grid[k][l] = 0;
            }
          }
        }
      }
    }
  };
  dfs(dfs);
  cout<<(ok?"Yes\n":"No\n");

  return 0;
}
