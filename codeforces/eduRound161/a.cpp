/**
 *    author: mralves 
 *    created: 18-01-2024 11:33:48       
**/
#include <bits/stdc++.h>

#define all(x) x.begin(),x.end()

// less is more
using namespace std;
using ll = long long;

void solve() {
  int N; cin>>N;
  string a, b, c;
  cin>>a>>b>>c;
  bool ok = true;
  int cnt = 0;
  for(int i=0; i<N; i++) {
    if(c[i] == b[i] or a[i] == c[i]) {
      cnt++;
    }
  }
  if(cnt == N) ok = false;
  cout<<(ok?"YES\n":"NO\n");
}

int main () {
  std::ios::sync_with_stdio(false);
  std::cin.tie(nullptr);

  int t = 1;
  cin>>t;
  while (t--) solve();
  return 0;
}
