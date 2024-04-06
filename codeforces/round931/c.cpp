/**
 *    author: mralves 
 *    created: 01-03-2024 11:32:42       
**/
#include <bits/stdc++.h>

#define all(x) x.begin(),x.end()

// less is more
using namespace std;
using ll = long long;

int ask(int x, int y) {
  cout<<"? "<<x<<" "<<y<<endl;
  int d; cin>>d;
  return d;
}

void ans(int x, int y) {
  cout<<"! "<<x<<" "<<y<<endl;
}

int manhattan(int x, int y, int x1, int y1) {
  return abs(x-x1) + abs(y-y1);
}

void solve() {
  int N, M; cin>>N>>M;
  int d = ask(1, 1);
  int d1 = ask(1, M);
  int d2 = ask(N, 1);

  int x=0, y=0, x1=0, y1=0;

  if(manhattan(d, d1, 1, M) == d1) {
    x=d, y=d1;
  } else if(manhattan(d1, d, 1, M) == d1) {
    x=d1, y=d;
  }

  if(manhattan(d, d2, N, 1) == d2) {
    x1=d, y1=d2;
  } else if(manhattan(d2, d, N, 1) == d2) {
    x1=d2, y1=d;
  }

  if(x == 0 and y == 0) {
    ans(x1, y1);
  } else if(x1==0) {
    ans(x, y);
  } else {
    int d3 = ask(x, y);
    if(d3 == 0) {
      ans(x, y);
    } else {
      ans(x1, y1);
    }
  }
}

int main () {
  //std::ios::sync_with_stdio(false);
  //std::cin.tie(nullptr);

  int t = 1;
  cin>>t;
  while (t--) solve();
  return 0;
}
