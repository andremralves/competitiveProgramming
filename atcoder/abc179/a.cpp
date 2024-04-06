/**
 *    author: mralves 
 *    created: 17-02-2024 17:35:45       
**/
#include <bits/stdc++.h>

#define all(x) x.begin(),x.end()

// less is more
using namespace std;
using ll = long long;

void solve() {
  string s;
  cin>>s;
  if(s.back() == 's') {
    s += "es";
  } else {
    s += "s";
  }
  cout<<s<<"\n";
}

int main () {
  std::ios::sync_with_stdio(false);
  std::cin.tie(nullptr);

  int t = 1;
  while (t--) solve();
  return 0;
}
