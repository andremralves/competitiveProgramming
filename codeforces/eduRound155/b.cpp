/**
 *    author: mralves 
 *    created: 20-01-2024 19:46:47       
**/
#include <bits/stdc++.h>

#define all(x) x.begin(),x.end()

// less is more
using namespace std;
using ll = long long;

void solve() {
  int N; cin>>N;
  vector<int> a(N), b(N);
  for(int i=0; i<N; i++) {
    cin>>a[i];
  }
  for(int i=0; i<N; i++) {
    cin>>b[i];
  }

  sort(all(a));
  sort(all(b));
  ll ans = 0, ans2 = 0;
  for(int i=0; i<N; i++) {
    ans+=a[i]+b[0];
  }
  for(int i=0; i<N; i++) {
    ans2+=b[i]+a[0];
  }

  cout<<min(ans, ans2)<<"\n";


}

int main () {
  std::ios::sync_with_stdio(false);
  std::cin.tie(nullptr);

  int t = 1;
  cin>>t;
  while (t--) solve();
  return 0;
}
