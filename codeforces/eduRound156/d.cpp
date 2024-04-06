/**
 *    author: mralves 
 *    created: 19-01-2024 23:27:31       
**/
#include <bits/stdc++.h>

#define all(x) x.begin(),x.end()

// less is more
using namespace std;
using ll = long long;

const int MOD = 998244353;
const int MAXB = 100;
int binom[MAXB][MAXB];

void solve() {
  int N, Q; cin>>N>>Q;
  string s; cin>>s;

  int mi = 0, mx = 0;
  for(int i=0; i<N-1; i++) {
    if(s[i] == '<') {
      mi++;
    } else if(s[i] == '>') {
      mx++;
    }
  }
  int l = 1, r = N;
  l += max(0, mi-1);
  r -= max(0, mx-1);
  int all = r-l+1;
  cout<<all<<" "<<mi+mx<<"\n";
  cout<<binom[all][mi+mx]<<"\n";
  while(Q--) {
    int i; char c;
    cin>>i>>c;
  }
}

int main () {
  std::ios::sync_with_stdio(false);
  std::cin.tie(nullptr);

  for(int i=0; i<MAXB; i++) {
    binom[i][0] = binom[i][i] = 1;
    for(int j=1; j<i; j++) {
      binom[i][j] = binom[i-1][j]+binom[i-1][j-1];
    }
  }

  int t = 1;
  while (t--) solve();
  return 0;
}
