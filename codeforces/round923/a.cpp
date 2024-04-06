/**
 *    author: mralves 
 *    created: 06-02-2024 11:43:54       
**/
#include <bits/stdc++.h>

#define all(x) x.begin(),x.end()

// less is more
using namespace std;
using ll = long long;

void solve() {
  int N; cin>>N;
  string s; cin>>s;
  int st=-1, e=-1;
  for(int i=0; i<N; i++) {
    if(s[i] == 'B') {
      if(st == -1) st = i;
      e = i+1;
    }
  }
  cout<<e-st<<"\n";
}

int main () {
  std::ios::sync_with_stdio(false);
  std::cin.tie(nullptr);

  int t = 1;
  cin>>t;
  while (t--) solve();
  return 0;
}
