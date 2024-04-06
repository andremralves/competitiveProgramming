/**
 *    author: mralves 
 *    created: 23-03-2024 08:59:03       
**/
#include <bits/stdc++.h>

#define all(x) x.begin(),x.end()

// less is more
using namespace std;
using ll = long long;

void solve() {
  int W, B;
  cin>>W>>B;
  string t = "wbwbwwbwbwbw";
  string s;
  for(int i=0; i<50; i++) {
    s += t;
  }

  for(int i=1; i<=200; i++) {
    for(int j=0; j<(int)s.size()/2; j++) {
      string tmp = s.substr(j, i);
      int x = count(tmp.begin(), tmp.end(), 'w');
      int y = count(tmp.begin(), tmp.end(), 'b');
      if(x == W and y == B) {
        cout<<"Yes\n";
        return;
      }
    }
  }
  cout<<"No\n";

}
// 7 w 
// 5 b

int main () {
  std::ios::sync_with_stdio(false);
  std::cin.tie(nullptr);

  int t = 1;
  while (t--) solve();
  return 0;
}
