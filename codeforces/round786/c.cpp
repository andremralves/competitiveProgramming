/**
 *    author: mralves 
 *    created: 01-02-2024 05:24:25       
**/
#include <bits/stdc++.h>

#define all(x) x.begin(),x.end()

// less is more
using namespace std;
using ll = long long;

const int MAXB = 51;
ll binom[MAXB][MAXB];
void pre() {
  for(int i=0; i<MAXB; i++) {
    binom[i][0] = binom[i][i] = 1;
    for(int j=1; j<i; j++) {
      binom[i][j] = binom[i-1][j]+binom[i-1][j-1];
    }
  }
}

void solve() {
  string s, t; cin>>s;
  cin>>t;

  int acnt = count(t.begin(), t.end(), 'a');
  if(acnt == (int)t.size() and acnt == 1) {
    cout<<"1\n";
  } else if(acnt > 0) {
    cout<<"-1\n";
  } else {
    ll ans = 0;
    for(int i=0; i<=(int)s.size(); i++) {
      ans += binom[(int)s.size()][i];
    }
    cout<<ans<<"\n";
  }
}

int main () {
  std::ios::sync_with_stdio(false);
  std::cin.tie(nullptr);
  pre();
  int t = 1;
  cin>>t;
  while (t--) solve();
  return 0;
}
