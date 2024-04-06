#include <bits/stdc++.h>

using namespace std;

const int LOG = 20;
const int MAXN = 2e5+10;
int up[MAXN][LOG];

int main() {
  std::ios::sync_with_stdio(false);
  std::cin.tie(nullptr);
  int N, Q;
  cin>>N>>Q;
  vector<int> p(N);
  p[0] = -1;
  for(int i=1; i<N; i++) {
    int x; cin>>x;
    x--;
    p[i] = x;
  }

  // build sparse table
  for(int i=0; i<N; i++) {
    for(int j=0; j<LOG; j++) {
      up[i][j] = -2;
    }
  }
  for(int i=1; i<N; i++) {
    up[i][0] = p[i];
    for(int j=1; j<LOG; j++) {
      up[i][j] = up[up[i][j-1]][j-1];
    }
  }

  while(Q--) {
    int x, k;
    cin>>x>>k;
    x--;
    for(int i=0; i<LOG; i++) {
      if(x < 0) break;
      if(k & (1 << i)) {
        x = up[x][i];
      }
    }
    cout<<x+1<<"\n";
  }
  return 0;
}
