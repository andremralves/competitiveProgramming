#include <bits/stdc++.h>
using namespace std;

long long psum[200005];
int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  int N, Q;
  cin>>N>>Q;
  for(int i=1; i<=N; i++) {
    int x; cin>>x;
    psum[i] = psum[i-1]+x;
  }
  while(Q--) {
    int l, r;
    cin>>l>>r;
    cout<<psum[r]-psum[l-1]<<"\n";
  }
  return 0;
}
