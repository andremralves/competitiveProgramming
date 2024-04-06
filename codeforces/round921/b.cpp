/**
 *    author: mralves 
 *    created: 27-01-2024 20:50:52       
**/
#include <bits/stdc++.h>

#define all(x) x.begin(),x.end()

// less is more
using namespace std;
using ll = long long;

void solve() {
  int X, N; cin>>X>>N;
  int mx = 1;

  vector<int> divs;
  for(int i=1; i*i<=X; i++) {
    if(X%i == 0) {
      divs.emplace_back(i);
      if(X/i != i)
        divs.emplace_back(X/i);
    }
  }
  sort(divs.begin(), divs.end());
  for(auto d:divs) {
    if(X/d >= N) {
      mx = max(d, mx);
    }
  }
  cout<<mx<<"\n";
}

int main () {
  std::ios::sync_with_stdio(false);
  std::cin.tie(nullptr);

  int t = 1;
  cin>>t;
  while (t--) solve();
  return 0;
}
