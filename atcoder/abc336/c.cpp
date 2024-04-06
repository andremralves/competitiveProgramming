/**
 *    author: mralves 
 *    created: 14-01-2024 09:01:23       
**/
#include <bits/stdc++.h>

#define all(x) x.begin(),x.end()

// less is more
using namespace std;
using ll = long long;

bool valid(ll X) {
  while(X) {
    if((X%10)%2) return false;
    X/=10;
  }
  return true;
}

void solve() {
  ll N;
  cin>>N;

  vector<int> nums = {0, 0, 2, 4, 6, 8};
  ll ans = 0;
  while(N > 5) {
    ll z = 1;
    ll X = 1;
    while(X*5 < N) {
      X*=5;
      z*=10;
    }
    //cout<<"x:"<<X<<"\n";
    ans += 2*z;
    N-=X;
  }
  ans += nums[N];
  cout<<ans<<"\n";

  //vector<int> nums1;
  //for(int i=0; i<=3000; i++) {
  //  int x = i;
  //  bool ok = true;
  //  while(x) {
  //    if((x%10)%2) ok = false;
  //    x/=10;
  //  }
  //  if(ok) {
  //    nums1.emplace_back(i);
  //  }
  //}
  ////cout<<nums1[Y-1]<<"\n";
  //assert(nums1[Y-1] == ans);
}

int main () {
  std::ios::sync_with_stdio(false);
  std::cin.tie(nullptr);

  int t = 1;
  while (t--) solve();
  return 0;
}
