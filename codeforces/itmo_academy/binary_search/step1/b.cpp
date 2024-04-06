#include <bits/stdc++.h>
using namespace std;

int main() {
  int N, K;
  cin>>N>>K;
  vector<int> a(N);
  for(int i=0; i<N; i++) cin>>a[i];
  while(K--) {
    int x; cin>>x;
    int l = 0, r = N;
    while(l<r) {
      int m = l+(r-l)/2;
      if(a[m] <= x) {
        l = m+1;
      } else {
        r = m;
      }
    }
    cout<<l<<"\n";
  }
  return 0;
}
