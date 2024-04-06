/**
 *    author: mralves 
 *    created: 31-01-2024 04:09:39       
**/
#include <bits/stdc++.h>

#define all(x) x.begin(),x.end()

// less is more
using namespace std;
using ll = long long;

int N, M, K;
bool validate(int i, int j) {
  if(i >= N or j >= M) return false;
  if(i < 0 or j < 0) return false;
  return true;
}

void solve() {
  cin>>N>>M>>K;
  vector<string> grid(N);
  for(int i=0; i<N; i++) {
    cin>>grid[i];
  }
  vector<int> used(N*M);
  bool ok = true;
  for(int i=N-1; i>=0; i--) {
    for(int j=0; j<M; j++) {
      if(grid[i][j] == '.') continue;
      // up
      int i1 = i, j1 = j, i2 = i, j2 = j;
      int d = -1;
      vector<int> blks;
      while(grid[i1][j1] == '*' and grid[i1][j1] == grid[i2][j2]) {
        //cout<<grid[i1][j1]<<" "<<grid[i2][j2]<<"\n";
        d++; 
        blks.emplace_back(i1*M+j1);
        blks.emplace_back(i2*M+j2);
        i1--; j1--; i2--; j2++;
        if(!validate(i1, j1)) break;
        if(!validate(i2, j2)) break;
      }
      //cout<<"d:"<<d<<"\n";
      if(d >= K) {
        for(auto x:blks) {
          used[x] = 1;
        }
      } else if(!used[i*M+j]) {
        ok = false;
      }
    }
  }
  cout<<(ok?"YES\n":"NO\n");
}

int main () {
  std::ios::sync_with_stdio(false);
  std::cin.tie(nullptr);

  int t = 1;
  cin>>t;
  while (t--) solve();
  return 0;
}
