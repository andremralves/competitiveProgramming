/**
 *    author: mralves 
 *    created: 13-01-2024 11:36:44       
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
  vector<int> divs;
  for(int i=1; i*i<=N; i++) {
    if(N%i==0) {
      divs.emplace_back(i);
      if(N/i != i)
        divs.emplace_back(N/i);
    }
  }

  int ans = 0;
  for(auto k:divs) {
    int g = 0;
    for(int i=0; i<N-k; i++) {
      g = gcd(a[i]-a[i+k], g);
    }
    ans += (g != 1);
  }
  cout<<ans<<"\n";
}

int main () {
  std::ios::sync_with_stdio(false);
  std::cin.tie(nullptr);

  int t = 1;
  cin>>t;
  while (t--) solve();
  return 0;
}
