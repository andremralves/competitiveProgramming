/**
 *    author: mralves 
 *    created: 27-02-2024 11:34:34       
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
  vector<ll> psum(N+1);
  for(int i=1; i<=N; i++) {
    psum[i] =psum[i-1]+a[i-1];
  }
  int Q; cin>>Q;
  while(Q--) {
    int l, u;
    cin>>l>>u;
    int lo = l-1, hi = N+1;
    while(hi-lo>1) {
      int m = lo+(hi-lo)/2;
      ll k = psum[m]-psum[l-1];
      ll k2 = psum[m-1]-psum[l-1];
      ll sum = ((u)+(u+1-k))*k/2;
      ll sum2 = ((u)+(u+1-k2))*k2/2;
      //cout<<"sums:"<<sum<<" "<<sum2<<"\n";
      //cout<<m<<" "<<k<<"\n";
      //cout<<u+1-k<<"\n";
      if(sum>sum2) {
        lo=m;
      } else {
        hi=m;
      }
    }
    cout<<max(lo, l)<<" ";
  }
  cout<<"\n";
}

int main () {
  std::ios::sync_with_stdio(false);
  std::cin.tie(nullptr);

  int t = 1;
  cin>>t;
  while (t--) solve();
  return 0;
}
