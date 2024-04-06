#include <bits/stdc++.h>
using namespace std;

using ll = long long;
void solve() {
  int N; cin>>N;
  vector<int> a(N);
  ll sum = 0;
  for(int i=0; i<N; i++) {
    cin>>a[i];
    sum+=a[i];
  }

  sort(a.rbegin(), a.rend());
  int ans = N;
  for(int d=1; d<=N; d++) {
    if(sum%d == 0) {
      int mx = sum/d;
      vector<pair<ll, ll>> blks(d);
      vector<bool> used(N);
      for(int k=0; k<N; k++) {
        for(auto &[x, y] :blks) {
          for(int i=0; i<N; i++) {
            if(used[i]) continue;
            if(x+a[i] <= mx) {
              used[i] = 1;
              x+=a[i];
              y++;
              break;;
            }
          }
        }
      }
      int big = 0;
      bool ok = true;
      cout<<"mx:"<<mx<<"\n";
      for(auto [x, y]:blks) {
        cout<<x<<" ";
        big = max(y, 1ll*big);
        if(x<d) ok = false;
      }
      cout<<big<<"\n";
      if(ok)
        ans = min(big, ans);
    }
  }

  cout<<ans<<"\n";

  
}

int main() {
  int t=1;
  cin>>t;
  while(t--) solve();
  return 0;
}
