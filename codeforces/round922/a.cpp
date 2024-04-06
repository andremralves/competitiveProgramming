/**
 *    author: mralves 
 *    created: 30-01-2024 11:34:21       
**/
#include <bits/stdc++.h>

#define all(x) x.begin(),x.end()

// less is more
using namespace std;
using ll = long long;

void solve() {
  int N, M; cin>>N>>M;
  if(M == 1) {
    cout<<"-1\n";
  } else {
    cout<<M/2*N<<"\n";
  }
}

int main () {
  std::ios::sync_with_stdio(false);
  std::cin.tie(nullptr);

  int t = 1;
  cin>>t;
  while (t--) solve();
  return 0;
}
