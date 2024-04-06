#include <bits/stdc++.h>
using namespace std;

int main() {
  long long N, Q;
  cin>>N>>Q;
  string s;
  cin>>s;
  long long base = 0;
  while(Q--) {
    long long q, x; cin>>q>>x;
    if(q == 1) {
      base -= x;
      base += N;
      base %= N;
    } else {
      cout<<s[((x+base-1)+N)%N]<<"\n";
    }
  }
  return 0;
}
