#include <bits/stdc++.h>
using namespace std;

int main() {
  int N; cin>>N;
  vector<vector<int>> grid(N, vector<int>(N));
  for(int i=0; i<N; i++) {
    for(int j=0; j<N; j++) {
      cin>>grid[i][j];
    }
  }
  for(int i=0; i<N; i++) {
    for(int j=0; j<N; j++) {
      if(grid[i][j]) {
        cout<<j+1<<" ";
      }
    }
    cout<<"\n";
  }

  return 0;
}
