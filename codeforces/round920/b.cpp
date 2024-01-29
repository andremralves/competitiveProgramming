/**
 *    author: mralves 
 *    created: 15-01-2024 11:34:35       
**/
#include <bits/stdc++.h>

#define all(x) x.begin(),x.end()

// less is more
using namespace std;
using ll = long long;

void solve() {
  int N; cin>>N;
  string s, t;
  cin>>s>>t;
  int cats = count(all(s), '1');
  int obj = count(all(t), '1');

  int ans = 0;
  int mov = 0;
  for(int i=0; i<N; i++) {
    if(s[i] == '1' and t[i] == '0') {
      if(cats > obj) {
        cats--;
        ans++;
      } else {
        mov++;
        ans++;
      }
    }
    if(s[i] == '0' and t[i] == '1'){
      if(cats<obj) {
        cats++;
        ans++;
      } else {
        mov--;
      }
    }
  }
  cout<<ans<<"\n";
}

int main () {
  std::ios::sync_with_stdio(false);
  std::cin.tie(nullptr);

  int t = 1;
  cin>>t;
  while (t--) solve();
  return 0;
}
