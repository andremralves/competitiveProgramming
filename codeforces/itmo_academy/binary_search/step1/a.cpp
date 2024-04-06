#include <bits/stdc++.h>
using namespace std;

int main() {
  int N, K;
  cin>>N>>K;
  vector<int> a(N);
  for(int i=0; i<N; i++) cin>>a[i];
  while(K--) {
    int x; cin>>x;
    int l = -1, r = N;
    while(r-l>1) {
      int m = l+(r-l)/2;
      if(a[m] >= x) {
        r = m;
      } else {
        l = m;
      }
    }
    if(r == N or a[r] != x) {
      cout<<"NO\n";
    } else {
      cout<<"YES\n";
    }
  }
  return 0;
}
