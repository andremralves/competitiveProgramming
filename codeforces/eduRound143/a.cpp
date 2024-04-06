/**
 *    author: mralves 
 *    created: 22-01-2024 21:10:48       
**/
#include <bits/stdc++.h>

#define all(x) x.begin(),x.end()

// less is more
using namespace std;
using ll = long long;

void solve() {
  int N, M; cin>>N>>M;
  string a, b; cin>>a>>b;

  while(!a.empty()) {
    b += a.back();
    a.pop_back();
  }

  while(!b.empty()) {
    a += b.back();
    b.pop_back();
    bool ok = true;
    for(int i=0; i<(int)a.size()-1; i++) {
      if(a[i] == a[i+1]) ok = false;
    }
    for(int i=0; i<(int)b.size()-1; i++) {
      if(b[i] == b[i+1]) ok = false;
    }
    if(ok) {
      cout<<"YES\n";
      return;
    }
  }
  cout<<"NO\n";
}

int main () {
  std::ios::sync_with_stdio(false);
  std::cin.tie(nullptr);

  int t = 1;
  cin>>t;
  while (t--) solve();
  return 0;
}
