#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main() {
  int t; cin>>t;
  while(t--) {
    int N; cin>>N;
    ll minus = 0;
    ll p = 1;
    while(p <= N) {
      minus += p;
      p *= 2;
    }
    cout<<1ll*(N+1)*N/2-minus*2<<"\n";
  }
  return 0;
}
