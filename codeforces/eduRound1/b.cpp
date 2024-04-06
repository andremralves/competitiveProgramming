#include <bits/stdc++.h>
using namespace std;

void solve() {
  string s; cin>>s;
  int M; cin>>M;
  while(M--) {
    int l, r, k;
    cin>>l>>r>>k;
    l--, r--;
    int m = r-l+1;
    string t = s.substr(l, r-l+1);
    int j = k%m;
    for(int i=0; i<(int)t.size(); i++) {
      s[l+i] = t[(i-j+m)%m];
    }
  }
  cout<<s<<"\n";
}

int main() {
  solve();
  return 0;
}
