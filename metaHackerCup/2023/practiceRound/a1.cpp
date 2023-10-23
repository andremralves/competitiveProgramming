#include <bits/stdc++.h>

using namespace std;

int main() {
  int t;
  cin>>t;
  for(int i=1; i<=t; i++) {
    int S, D, K;
    cin>>S>>D>>K;
    int buns = S*2 + D*2;
    int ham = S + D*2;
    cout<<"Case #"<<i<<": ";
    if(buns >= K+1 and ham >= K) {
      cout<<"YES\n";
    } else {
      cout<<"NO\n";
    }
  }
  return 0;
}
