/**
 *    author: mralves 
 *    created: 30-01-2024 08:51:32       
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
  vector<int> psum(N);
  for(int i=0; i<N; i++) {
    if(i-2 >= 0) {
      psum[i] = psum[i-2];
    }
    psum[i] += a[i];
  }

  int ans = 0;
  for(int i=0; i<N; i++) {
    int even = 0, odd = 0;
    if(i%2 == 0) {
      if(i>0) odd += psum[i-1];
      if(i>1) even += psum[i-2];

      if((N-1)%2 == 0) {
        if(N-2 >= 0) {
          even += psum[N-2]-odd;
        if(N-1 >= 0)
          odd += psum[N-1]-psum[i];
        }
      } else {
        if(N-1 >= 0)
          even += psum[N-1]-odd;
        if(N-2 >= 0)
          odd += psum[N-2]-psum[i];
      }
    } else {
      if(i>0) even += psum[i-1];
      if(i>1) odd += psum[i-2];

      if((N-1)%2) {
        if(N-2 >= 0)
          odd += psum[N-2]-even;
        if(N-1 >= 0)
          even += psum[N-1]-psum[i];
      } else {
        if(N-1 >= 0)
          odd += psum[N-1]-even;
        if(N-2 >= 0)
          even += psum[N-2]-psum[i];
      }
    }
    //cout<<even<<" "<<odd<<"\n";
    if(even == odd) ans++;
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
