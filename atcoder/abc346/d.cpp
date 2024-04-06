/**
 *    author: mralves 
 *    created: 23-03-2024 08:59:03       
**/
#include <bits/stdc++.h>

#define all(x) x.begin(),x.end()

// less is more
using namespace std;
using ll = long long;

const ll INF = 1e16;
void solve() {
  int N; cin>>N;
  string a; cin>>a;
  vector<int> c(N);
  for(int i=0; i<N; i++) cin>>c[i];

  vector<ll> alt1(N), alt2(N);
  if(a[0] == '0') alt2[0] = c[0];
  else alt1[0] = c[0];
  for(int i=1; i<N; i++) {
    alt1[i] += alt1[i-1];
    if(i%2 == 0 and a[i] == '1') {
      alt1[i] += c[i];
    }
    if(i%2 and a[i] == '0') {
      alt1[i] += c[i];
    }
  }
  for(int i=1; i<N; i++) {
    alt2[i] += alt2[i-1];
    if(i%2 == 0 and a[i] == '0') {
      alt2[i] += c[i];
    }
    if(i%2 and a[i] == '1') {
      alt2[i] += c[i];
    }
  }

  ll ans = INF;
  for(int i=0; i<N-1; i++) {
    // 00
    ll x = 0;
    if(a[i] == '1') x+=c[i];
    if(a[i+1] == '1') x+=c[i+1];
    if(i>0) {
      if((i-1)%2) {
        x += alt1[i-1];
      } else {
        x += alt2[i-1];
      }
    }
    if(i+1 < N) {
      if((i+2)%2) {
        x += alt1[N-1]-alt1[i+1];
      } else {
        x += alt2[N-1]-alt2[i+1];
      }
    }
    //cout<<"x:"<<x<<"\n";
    ans = min(ans, x);
    x = 0;
    // 11
    if(a[i] == '0') x+=c[i];
    if(a[i+1] == '0') x+=c[i+1];
    if(i>0) {
      if((i-1)%2) {
        x += alt2[i-1];
      } else {
        x += alt1[i-1];
      }
    }
    if(i+1 < N-1) {
      if((i+2)%2) {
        x += alt2[N-1]-alt2[i+1];
      } else {
        x += alt1[N-1]-alt1[i+1];
      }
    }
    //cout<<"x:"<<x<<"\n";
    ans = min(ans, x);
  }
  cout<<ans<<"\n";

}

int main () {
  std::ios::sync_with_stdio(false);
  std::cin.tie(nullptr);

  int t = 1;
  while (t--) solve();
  return 0;
}
