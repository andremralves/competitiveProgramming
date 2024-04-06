/**
 *    author: mralves 
 *    created: 20-01-2024 19:46:47       
**/
#include <bits/stdc++.h>

#define all(x) x.begin(),x.end()

// less is more
using namespace std;
using ll = long long;

const int MOD = 998244353;

void solve() {
  string s; cin>>s;
  int N = s.size();

  int mi = 0; ll ans = 1;
  for(int i=0; i<N; i++) {
    int j = i;
    while(j < N and s[i] == s[j]) {
      j++;
    }
    mi += j-i-1;
    ans = ans*(j-i)%MOD;
    i = j-1;
  }
  for(int i=1; i<=mi; i++) {
    ans = ans * i % MOD;
  }
  cout<<mi<<" "<<ans<<"\n";
}

int main () {
  std::ios::sync_with_stdio(false);
  std::cin.tie(nullptr);

  int t = 1;
  cin>>t;
  while (t--) solve();
  return 0;
}
