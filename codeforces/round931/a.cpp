/**
 *    author: mralves 
 *    created: 01-03-2024 11:32:42       
**/
#include <bits/stdc++.h>

#define all(x) x.begin(),x.end()

// less is more
using namespace std;
using ll = long long;

void solve() {
  int N; cin>>N;
  vector<int> a(N);
  for(int i=0; i<N; i++) cin>>a[i];
  sort(a.begin(), a.end());
  int ans = abs(a[N-1]-a[0])+abs(a[N-2]-a[1])+abs(a[N-1]-a[1])+abs(a[N-2]-a[0]);
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
