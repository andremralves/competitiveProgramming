#include <bits/stdc++.h>
using namespace std;

const int MAXN = 1e5+5;
int ans[MAXN];
void pre() {
  ans[0] = 1;
  vector<int> bin_dec;
  for(int i=0; i<(1<<5); i++) {
    string s;
    for(int j=0; j<5; j++) {
      if(1&(i>>j)) s+="1";
      else s+="0";
    }
    bin_dec.push_back(atoi(&s[0]));
  }
  auto dfs = [&](auto &&self, int x, int mult) {
    mult = mult * x;
    if(mult >= MAXN) return;
    ans[mult] = 1;
    for(auto v:bin_dec) {
      if(v>1)
        self(self, v, mult);
    }
  };
  dfs(dfs, 1, 1);
}

void solve() {
  int N; cin>>N;
  if(ans[N]) {
    cout<<"YES\n";
  } else {
    cout<<"NO\n";
  }

}

int main() {
  int t = 1;
  cin>>t;
  pre();
  while(t--) solve();
  return 0;
}
