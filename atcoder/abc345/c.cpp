#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
  string s; 
  cin>>s;
  int N = s.size();
  vector<int> cnt(26);
  ll ans = 0;
  for(int i=0; i<N; i++) {
    ans += i-cnt[s[i]-'a'];
    cnt[s[i]-'a']++;
  }
  int add = 0;
  for(auto x:cnt) {
    if(x > 1) {
      add=1;
      break;
    }
  }
  cout<<ans+add<<"\n";
  return 0;
}
