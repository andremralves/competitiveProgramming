/**
 *    author: mralves 
 *    created: 15-01-2024 11:34:35       
**/
#include <bits/stdc++.h>

#define all(x) x.begin(),x.end()

// less is more
using namespace std;
using ll = long long;

void solve() {
  int N, M;
  cin>>N>>M;
  vector<int> a(N), b(M);
  for(int i=0; i<N; i++) {
    cin>>a[i];
  }
  for(int i=0; i<M; i++) {
    cin>>b[i];
  }
  sort(all(a));
  sort(b.rbegin(),b.rend());
  ll ans = 0;
  int r = 0, l = 0;
  for(int i=0; i<N; i++) {
    int x = abs(a[l]-b[l]);
    int y = abs(a[N-r-1]-b[M-1-r]);
    if(x > y) {
      l++;
      ans += x;
    } else {
      r++;
      ans += y;
    }

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
