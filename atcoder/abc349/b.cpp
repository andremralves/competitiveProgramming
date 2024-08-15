#include <bits/stdc++.h>

#define all(x) x.begin(),x.end()

// less is more
using namespace std;
using ll = long long;

void solve() {
  string s;
  cin>>s;
  int N = s.size();
  map<char, int> mp;
  for(int i=0; i<N; i++) {
    mp[s[i]]++;
  }
  vector<int> cnt(N+1);
  for(auto [x, y]:mp) {
    cnt[y]++;
  }
  bool ok = true;
  for(int i=1; i<=N; i++) {
    if(cnt[i] != 2 and cnt[i] != 0) {
      ok = false;
      break;
    }
  }
  cout<<(ok?"Yes\n":"No\n");
}

int main () {
  std::ios::sync_with_stdio(false);
  std::cin.tie(nullptr);

  int t = 1;
  //cin>>t;
  while (t--) solve();
  return 0;
}
