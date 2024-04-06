/**
 *    author: mralves 
 *    created: 19-01-2024 23:27:31       
**/
#include <bits/stdc++.h>

#define all(x) x.begin(),x.end()

// less is more
using namespace std;
using ll = long long;

double calc_dis(int a1, int a2, int b1, int b2) {
  return sqrt(abs(a1-b1)*abs(a1-b1)+abs(a2-b2)*abs(a2-b2));
}

void solve() {
  int p1, p2, a1, a2, b1, b2;
  cin>>p1>>p2>>a1>>a2>>b1>>b2;

  double disAB = calc_dis(a1, a2, b1, b2)/2;
  double disAP = calc_dis(a1, a2, p1, p2);
  double disA0 = calc_dis(a1, a2, 0, 0);
  double disBP = calc_dis(b1, b2, p1, p2);
  double disB0 = calc_dis(b1, b2, 0, 0);

  cout<<min({
      max({disAB, disAP, disB0}),
      max({disAB, disA0, disBP}),
      max({disA0, disAP}),
      max({disB0, disBP})
      })<<"\n";


}

int main () {
  std::ios::sync_with_stdio(false);
  std::cin.tie(nullptr);
  cout<<setprecision(15);

  int t = 1;
  cin>>t;
  while (t--) solve();
  return 0;
}
