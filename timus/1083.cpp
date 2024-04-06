#include <bits/stdc++.h>
using namespace std;

int main() {
  int N, K;
  string s;
  cin>>N>>s;
  K = s.size();

  long long ans = 1;
  while(N>0) {
    ans *= N;
    N-=K;
  }
  cout<<ans<<"\n";
  return 0;
}
