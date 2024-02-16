#include <bits/stdc++.h>
using namespace std;
void solve() {
  int N; cin>>N;
  vector<string> vs;
  for(int i=1; i<=26; i++) {
    for(int j=1; j<=26; j++) {
      for(int k=1; k<=26; k++) {
        if(i+j+k == N) {
          string s;
          s += 'a'+i-1;
          s += 'a'+j-1;
          s += 'a'+k-1;
          vs.emplace_back(s);
        }
      }
    }
  }
  sort(vs.begin(), vs.end());
  cout<<vs[0]<<"\n";

}
int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  int t; cin>>t;
  while(t--) solve();
  return 0;
}
