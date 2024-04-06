/**
 *    author: mralves 
 *    created: 08-01-2024 21:25:24       
**/
#include <bits/stdc++.h>

#define all(x) x.begin(),x.end()

// less is more
using namespace std;
using ll = long long;

void solve() {
  int a[3];
  cin>>a[0]>>a[1]>>a[2];
  sort(a, a+3);
  if(a[1]%a[0] == 0 and a[2]%a[0] == 0 and a[1]/a[0] <= 4 and a[2]/a[0] <= 4) {
    if(a[2]/a[0]+a[1]/a[0] > 5) {
      cout<<"NO\n";
    } else 
      cout<<"YES\n";
  } else {
    cout<<"NO\n";
  }
}

int main () {
  std::ios::sync_with_stdio(false);
  std::cin.tie(nullptr);

  int t = 1;
  cin>>t;
  while (t--) solve();
  return 0;
}
