#include <bits/stdc++.h>
using namespace std;

using P = pair<int, int>;
void solve() {
  int N; cin>>N;
  vector<P> ps(N);
  for(auto & [x, y]: ps) {
    cin>>x>>y;
  }

  sort(ps.begin(), ps.end());
  bool ok = true;
  int m = (ps[N/2].first+ps[(N+1)/2-1].first)/2;
  cout<<"m:"<<m<<"\n";
  for(int i=0; i<N; i++) {
    if(ps[i].second != ps[N-i-1].second) ok = false;
    if((ps[i].first+ps[N-i-1].first)/2 != m) ok = false;

  }
  cout<<(ok?"YES\n":"NO\n");



}

int main() {
  int t; cin>>t;
  while(t--) solve();
  return 0;
}
