/**
 *    author: mralves 
 *    created: 31-01-2024 04:09:39       
**/
#include <bits/stdc++.h>

#define all(x) x.begin(),x.end()

// less is more
using namespace std;
using ll = long long;

void solve() {
  string s; cin>>s;
  int N = s.size();
  int a=0, b=0, c=0;
  for(int i=0; i<N; i++) {
    if(s[i] == 'A') {
      a++;
    } else if(s[i] == 'B') {
      b++;
    } else {
      c++;
    }
  }
  cout<<(b==a+c?"YES\n":"NO\n");
}

int main () {
  std::ios::sync_with_stdio(false);
  std::cin.tie(nullptr);

  int t = 1;
  cin>>t;
  while (t--) solve();
  return 0;
}
