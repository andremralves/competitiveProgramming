/**
 *    author: mralves 
 *    created: 21-02-2024 02:13:43       
**/
#include <bits/stdc++.h>

#define all(x) x.begin(),x.end()

// less is more
using namespace std;
using ll = long long;

void solve() {
  double A, B;
  cin>>A>>B;
  double hip = sqrt(A*A+B*B);
  cout<<A/hip<<" "<<B/hip<<"\n";
}

int main () {
  std::ios::sync_with_stdio(false);
  std::cin.tie(nullptr);
  cout<<setprecision(10)<<fixed;

  int t = 1;
  while (t--) solve();
  return 0;
}
