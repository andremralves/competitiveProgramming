/**
 *    author: mralves 
 *    created: 23-02-2024 00:40:02       
**/
#include <bits/stdc++.h>

#define all(x) x.begin(),x.end()

// less is more
using namespace std;
using ll = long long;

void solve() {
  int N; cin>>N;
  string t; cin>>t;
  vector<pair<int, string>> ans;
  for(int i=0; i<26; i++) {
  for(int j=0; j<26; j++) {
    string s(1, i+'A');
    s += 'A'+j;
    int cnt = 0;
    for(int k=0; k<N-1; k++) {
      if(t.substr(k, 2) == s) cnt++;
    }
    ans.push_back({cnt, s});
  }
  }
  sort(ans.rbegin(), ans.rend());
  cout<<ans[0].second<<"\n";

}

int main () {
  std::ios::sync_with_stdio(false);
  std::cin.tie(nullptr);

  int t = 1;
  while (t--) solve();
  return 0;
}
