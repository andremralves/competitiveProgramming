/**
 *    author: mralves 
 *    created: 21-01-2024 20:36:21       
**/
#include <bits/stdc++.h>

#define all(x) x.begin(),x.end()

// less is more
using namespace std;
using ll = long long;

void solve() {
  string a, b;
  cin>>a>>b;

  if(a[0] == b[0]) {
    cout<<"YES\n";
    cout<<a[0]<<"*\n";
    return;
  } else if(a.back() == b.back()) {
    cout<<"YES\n";
    cout<<"*"<<a.back()<<"\n";
    return;
  }

  for(int i=0; i<(int)a.size()-1; i++) {
    string tmp = a.substr(i, 2);
    if(b.find(tmp) != string::npos) {
      cout<<"YES\n";
      cout<<"*"<<tmp<<"*\n";
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
