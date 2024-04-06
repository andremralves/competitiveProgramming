/**
 *    author: mralves 
 *    created: 05-03-2024 11:37:48       
**/
#include <bits/stdc++.h>

#define all(x) x.begin(),x.end()

// less is more
using namespace std;
using ll = long long;

void solve() {
  int N, L; cin>>N>>L;
  vector<pair<int, int>> vp;
  for(int i=0; i<N; i++) {
    int a, b;
    cin>>a>>b;
    vp.push_back({a, b});
  }

  sort(vp.begin(), vp.end(), [](auto lhs, auto rhs){
      return lhs.second<rhs.second;
      });


}

int main () {
  std::ios::sync_with_stdio(false);
  std::cin.tie(nullptr);

  int t = 1;
  cin>>t;
  while (t--) solve();
  return 0;
}
