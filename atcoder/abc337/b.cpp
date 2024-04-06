/**
 *    author: mralves 
 *    created: 20-01-2024 08:59:03       
**/
#include <bits/stdc++.h>

#define all(x) x.begin(),x.end()

// less is more
using namespace std;
using ll = long long;

void solve() {
  string s;
  cin>>s;
  int i = 0;
  while(s[i] == 'A') i++;
  while(s[i] == 'B') i++;
  while(s[i] == 'C') i++;
  if(i == (int)s.size()) {
    cout<<"Yes\n";
  } else {
    cout<<"No\n";
  }
}

int main () {
  std::ios::sync_with_stdio(false);
  std::cin.tie(nullptr);

  int t = 1;
  while (t--) solve();
  return 0;
}
