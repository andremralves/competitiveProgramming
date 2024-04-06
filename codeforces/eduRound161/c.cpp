/**
 *    author: mralves 
 *    created: 18-01-2024 11:33:48       
**/
#include <bits/stdc++.h>

#define all(x) x.begin(),x.end()

// less is more
using namespace std;
using ll = long long;

void solve() {
  int N; cin>>N;
  vector<int> a(N);
  for(int i=0; i<N; i++) {
    cin>>a[i];
  }
  sort(all(a));
  vector<ll> psum(N+1), rsum(N+1);
  psum[2] = 1;
  for(int i=1; i<N-1; i++) {
    if(a[i]-a[i-1] < a[i+1]-a[i]) {
      psum[i+2] = psum[i+1]+a[i+1]-a[i];
    } else {
      psum[i+2] = psum[i+1]+1;
    }
  }
  reverse(all(a));
  rsum[2] = 1;
  for(int i=1; i<N-1; i++) {
    if(a[i-1]-a[i] < a[i]-a[i+1]) {
      rsum[i+2] = rsum[i+1]+a[i]-a[i+1];
    } else {
      rsum[i+2] = rsum[i+1]+1;
    }
  }
  int M; cin>>M;
  while(M--) {
    int x, y;
    cin>>x>>y;
    if(x > y) {
      cout<<rsum[N-y+1]-rsum[N-x+1]<<"\n";
    } else 
      cout<<psum[y]-psum[x]<<"\n";
  }
}

int main () {
  std::ios::sync_with_stdio(false);
  std::cin.tie(nullptr);

  int t = 1;
  cin>>t;
  while (t--) solve();
  return 0;
}
