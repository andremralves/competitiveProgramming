#include <bits/stdc++.h>

#define all(x) x.begin(),x.end()

// less is more
using namespace std;
using ll = long long;

void solve() {
  ll N, K;
  cin>>N>>K;
  vector<int> a(N);
  for(int i=0; i<N; i++) {
    cin>>a[i];
  }
  int l= 0, r= N-1;
  while(K and l<=r) {
    //cout<<l<<" "<<r<<"\n";
    //cout<<a[l]<<" "<<a[r]<<"\n";
    ll atacks = 0;
    if(a[l] <= a[r]) {
      atacks = a[l]*2;
    } else {
      atacks = a[r]*2;
    }
    atacks = min(K, atacks);
    K -= atacks;
    a[l] -= (atacks+1)/2;
    a[r] -= atacks/2;
    if(a[l] <= 0) l++;
    if(a[r] <= 0) r--;
  }
  //cout<<l<<" "<<r<<"\n";
  cout<<N-max(0, r-l+1)<<"\n";
}

int main () {
  std::ios::sync_with_stdio(false);
  std::cin.tie(nullptr);

  int t = 1;
  cin>>t;
  while (t--) solve();
  return 0;
}
