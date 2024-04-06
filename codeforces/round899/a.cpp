/**
 *    author: mralves 
 *    created: 11-01-2024 16:54:55       
**/
#include <bits/stdc++.h>

#define all(x) x.begin(),x.end()

// less is more
using namespace std;
using ll = long long;

void solve() {
  int N; cin>>N;
  vector<int> a(N);
  ll x = 1;
  for(int i=0; i<N; i++) {
    cin>>a[i];
    if(x == a[i]) x++;
    x++;
  }
  cout<<x-1<<"\n";
}

int main () {
  std::ios::sync_with_stdio(false);
  std::cin.tie(nullptr);

  int t = 1;
  cin>>t;
  while (t--) solve();
  return 0;
}
