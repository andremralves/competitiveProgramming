#include <bits/stdc++.h>

#define all(x) x.begin(),x.end()

// less is more
using namespace std;
using ll = long long;

void solve() {
  int N; cin>>N;
  string s; cin>>s;
  int one = 0;
  for(auto c:s) {
    if(c == '1')one++;
  }
  if(one%2) {
    cout<<"NO\n";
  } else {
    if(one == 2) {
      for(int i=0; i<N-1; i++) {
        if(s[i] == s[i+1] and s[i] == '1') {
          cout<<"NO\n";
          return;
        }
      }
    }
    cout<<"YES\n";
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
