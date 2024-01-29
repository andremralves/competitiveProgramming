/**
 *    author: mralves 
 *    created: 15-01-2024 11:34:35       
**/
#include <bits/stdc++.h>

#define all(x) x.begin(),x.end()

// less is more
using namespace std;
using ll = long long;

void solve() {
  int minx = 10000, maxx = -10000, miny = 10000, maxy = -10000;
  for(int i=0; i<4; i++) {
    int a, b;
    cin>>a>>b;
    minx = min(minx, a);
    miny = min(miny, b);
    maxx = max(maxx, a);
    maxy = max(maxy, b);
  }
  cout<<abs(maxx-minx)*abs(maxy-miny)<<"\n";
}

int main () {
  std::ios::sync_with_stdio(false);
  std::cin.tie(nullptr);

  int t = 1;
  cin>>t;
  while (t--) solve();
  return 0;
}
