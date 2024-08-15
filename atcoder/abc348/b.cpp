#include <bits/stdc++.h>

#define all(x) x.begin(),x.end()

// less is more
using namespace std;
using ll = long long;

void solve() {
  int N; cin>>N;
  vector<pair<int, int>> ps(N);
  for(int i=0; i<N; i++) {
    int x, y;
    cin>>x>>y;
    ps[i] = {x, y};
  }
  for(int i=0; i<N; i++) {
    double dis = 0;
    int id;
    for(int j=0; j<N; j++) {
      if(i != j) {
        auto [x1, y1] = ps[i];
        auto [x2, y2] = ps[j];
        double x= sqrt((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1));
        if(x > dis) {
          id = j;
          dis = x;
        }
      }
    }
    cout<<id+1<<"\n";
  }
}

int main () {
  std::ios::sync_with_stdio(false);
  std::cin.tie(nullptr);

  int t = 1;
  while (t--) solve();
  return 0;
}
