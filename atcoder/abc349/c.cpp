#include <bits/stdc++.h>

#define all(x) x.begin(),x.end()

// less is more
using namespace std;
using ll = long long;

void solve() {
  string S, T;
  cin>>S>>T;
  int p = S.find(tolower(T[0]));
  if(p == -1) {
    cout<<"No\n";
    return;
  }
  p = S.find(tolower(T[1]), p+1);
  if(p == -1) {
    cout<<"No\n";
    return;
  }

  if(T[2] == 'X') {
    cout<<"Yes\n";
    return;
  }

  p = S.find(tolower(T[2]), p+1);
  if(p == -1) {
    cout<<"No\n";
    return;
  }
  cout<<"Yes\n";
}

int main () {
  std::ios::sync_with_stdio(false);
  std::cin.tie(nullptr);

  int t = 1;
  //cin>>t;
  while (t--) solve();
  return 0;
}
