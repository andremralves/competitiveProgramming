/**
 *    author: mralves 
 *    created: 30-01-2024 11:34:21       
**/
#include <bits/stdc++.h>

#define all(x) x.begin(),x.end()

// less is more
using namespace std;
using ll = long long;

void solve() {
  ll a, b, r;
  cin>>a>>b>>r;

  ll A = 0, B = 0;
  ll cur = 0;
  for(int i=62; i>=0; i--) {
    if(cur+(1ll<<i) > r) {
      //cout<<(1<<i)<<"\n";
      A += (1ll<<i)&a;
      B += (1ll<<i)&b;
    } else {
      if(((a>>i)&1) == ((b>>i)&1)) {
        if(((a>>i)&1)) {
          A += (1ll<<i);
          B += (1ll<<i);
        }
        //cout<<"eq\n";
        //cout<<(1ll<<i)<<" "<<A<<" "<<B<<"\n";
        continue;
      }
      if(A > B or (A == B and ((b>>i)&1) == 1)) {
        B += (1ll<<i);
        if(((b>>i)&1) == 0) {
          cur += (1ll<<i);
        }
      } else {
        A += (1ll<<i);
        if(((a>>i)&1) == 0) {
          cur += (1ll<<i);
        }
      }
    }
    //cout<<(1ll<<i)<<" "<<A<<" "<<B<<" "<<cur<<"\n";
  }
  //ll ans = 1000000;
  //for(int i=0; i<=r; i++) {
  //  ans = min(abs((i^a) - (i^b)), ans);
  //}
  //cout<<"cur:"<<cur<<"\n";
  //cout<<A<<" "<<B<<"\n";
  cout<<abs(A-B)<<"\n";
  //cout<<"ans:"<<ans<<"\n";

}

int main () {
  std::ios::sync_with_stdio(false);
  std::cin.tie(nullptr);

  int t = 1;
  cin>>t;
  while (t--) solve();
  return 0;
}
