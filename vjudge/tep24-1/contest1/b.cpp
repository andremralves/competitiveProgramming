#include <bits/stdc++.h>

#define all(x) x.begin(),x.end()

// less is more
using namespace std;
using ll = long long;

void solve() {
  string s; cin>>s;
  int N = s.size();
  bool ok = true;
  for(int i=0; i<N; i++) {
    if(i%2) {
      if(islower(s[i])) ok = false;
    } else {
      if(isupper(s[i])) ok = false;
    }
  }
  cout<<(ok?"Yes\n":"No\n");
}

int main () {
  std::ios::sync_with_stdio(false);
  std::cin.tie(nullptr);

  int t = 1;
  while (t--) solve();
  return 0;
}
