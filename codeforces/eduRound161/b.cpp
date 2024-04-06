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
  vector<int> hist(N+1);
  for(int i=0; i<N; i++) {
    cin>>a[i];
    hist[a[i]]++;
  }
  ll ans = 0;
  int acc = 0;
  for(auto x:hist) {
    if(x >= 3) {
      ans += 1ll*x*(x-1)*(x-2)/6;
    }
    if(acc > 0) {
      ans += 1ll*acc*x*(x-1)/2;
    }
    acc += x;
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
