#include <bits/stdc++.h>
using namespace std;

int main() {
  int N; cin>>N;
  vector<int> color(N);
  vector<vector<int>> G(N);
  for(int i=0; i<N-1; i++) {
    int p; cin>>p;
    G[i+1].push_back(p);
    G[p].push_back(i+1);
  }
  for(int i=0; i<N; i++) {
    int c; cin>>c;
  }
  return 0;
}
