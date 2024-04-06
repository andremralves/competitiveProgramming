/**
 *    author: mralves 
 *    created: 26-01-2024 00:17:47       
**/
#include <bits/stdc++.h>

#define all(x) x.begin(),x.end()

// less is more
using namespace std;
using ll = long long;

int N, M;
int calc(int x, int y) {
  int mn = 4;
  if(x == 1 or x == N) {
    if(y == M or y == 1) {
      mn = 2;
    } else {
      mn = 3;
    }
  } else if(y == 1 or y == M) {
    if(x == 1 or x == N) {
      mn = 2;
    } else {
      mn = 3;
    }
  }
  return mn;
}

void solve() {
  cin>>N>>M;
  int x1, y1, x2, y2;
  cin>>x1>>y1>>x2>>y2;

  cout<<min(calc(x1, y1), calc(x2, y2))<<"\n";

}

int main () {
  std::ios::sync_with_stdio(false);
  std::cin.tie(nullptr);

  int t = 1;
  cin>>t;
  while (t--) solve();
  return 0;
}
