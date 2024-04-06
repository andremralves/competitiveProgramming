/**
 *    author: mralves 
 *    created: 18-02-2024 09:03:00       
**/
#include <bits/stdc++.h>

#define all(x) x.begin(),x.end()

// less is more
using namespace std;
using ll = long long;

void solve() {
  int N; cin>>N;
  vector<ll> a(N);
  for(int i=0; i<N; i++) {
    cin>>a[i];
    if(i) a[i] = a[i]*(a[i-1]/a[i]+1);
  }
  cout<<a[N-1]<<"\n";
}

int main () {
  std::ios::sync_with_stdio(false);
  std::cin.tie(nullptr);

  int t = 1;
  cin>>t;
  while (t--) solve();
  return 0;
}
