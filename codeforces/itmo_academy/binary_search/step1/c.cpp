#include <bits/stdc++.h>
using namespace std;
int main() {
  int N, K; cin>>N>>K;
  vector<int> a(N);
  for(auto &x:a) cin>>x;
  while(K--) {
    int x; cin>>x;
    int l=0,r=N-1;
    int ans = N+1;
    while(l<=r) {
      int m = l+(r-l)/2;
      if(a[m] >= x) {
        ans = m+1;
        r = m-1;
      } else {
        l = m+1;
      }
    }
    cout<<ans<<"\n";
  }
  return 0;
}
