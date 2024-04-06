#include <bits/stdc++.h>
using namespace std;

bool is_palindrome(long long x) {
  string s = to_string(x);
  string r = s; reverse(r.begin(), r.end());
  return s == r;
}

int main() {
  long long N; cin>>N;
  long long ans = 0;
  for(long long x=1; x*x*x<=N; x++) {
    long long K = x*x*x;
    if(is_palindrome(K)) ans = K;
  }
  cout<<ans<<"\n";
  return 0;
}
