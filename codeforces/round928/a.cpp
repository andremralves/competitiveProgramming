/**
 *    author: mralves 
 *    created: 19-02-2024 11:32:51       
**/
#include <bits/stdc++.h>

#define all(x) x.begin(),x.end()

// less is more
using namespace std;
using ll = long long;

void solve() {
  string s; cin>>s;
  if(count(s.begin(), s.end(), 'A') >  count(s.begin(), s.end(), 'B')) {
    cout<<"A\n";
  } else {
    cout<<"B\n";
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
