#include <bits/stdc++.h>
using namespace std;

using ll = int64_t;

void brute(int n) {
  int cnt = 0;
  for(int i=1; i<=n; i++) {
    string s = to_string(i);
    int len = s.size();
    if(s.substr(0, len/2) == s.substr(len/2)) {
      cnt++;
    }
  }
  cout<<cnt<<"\n";
}

int main() {
  ll N;
  cin>>N;
  string s = to_string(N);
  int ans = 0, base = 1;
  for(int i=s.size()/2-1; i>=0; i--) {
    int x = s[i]-'0';
    ans += base*x;
    base *= 10;
  }
  int len = s.size();
  if(len%2) {
    cout<<base-1<<"\n";
    return 0;
  }
  if(s.substr(0, len/2) > s.substr(len/2)) {
    ans--; 
  }
  cout<<ans<<"\n";
  return 0;
}
