/**
 *    author: mralves 
 *    created: 31-01-2024 10:41:55       
**/
#include <bits/stdc++.h>

#define all(x) x.begin(),x.end()

// less is more
using namespace std;
using ll = long long;

void solve() {
  int a, b, c;
  cin>>a>>b>>c;
  cout<<max(0, max(b, c)-a+1)<<" ";
  cout<<max(0, max(a, c)-b+1)<<" ";
  cout<<max(0, max(b, a)-c+1)<<"\n";
}

int main () {
  std::ios::sync_with_stdio(false);
  std::cin.tie(nullptr);

  int t = 1;
  cin>>t;
  while (t--) solve();
  return 0;
}
