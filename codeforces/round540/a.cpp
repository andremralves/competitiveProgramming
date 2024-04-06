/**
 *    author: mralves 
 *    created: 30-01-2024 08:51:32       
**/
#include <bits/stdc++.h>

#define all(x) x.begin(),x.end()

// less is more
using namespace std;
using ll = long long;

void solve() {
  ll N, A, B;
  cin>>N>>A>>B;
  cout<<min(N*A, N/2*B+(N%2?A:0))<<"\n";
}

int main () {
  std::ios::sync_with_stdio(false);
  std::cin.tie(nullptr);

  int t = 1;
  cin>>t;
  while (t--) solve();
  return 0;
}
