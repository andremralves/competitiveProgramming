#include <bits/stdc++.h>

#define all(x) x.begin(),x.end()

// less is more
using namespace std;
using ll = long long;

void solve() {
  double A, B;
  cin>>A>>B;
  if(A+B >= 15 and B >= 8) {
    cout<<1<<"\n";
  } else if(A+B >= 10 and B >= 3) {
    cout<<2<<"\n";
  } else if(A+B >= 3) {
    cout<<3<<"\n";
  } else {
    cout<<4<<"\n";
  }
}

int main () {
  std::ios::sync_with_stdio(false);
  std::cin.tie(nullptr);

  int t = 1;
  //cin>>t;
  while (t--) solve();
  return 0;
}
