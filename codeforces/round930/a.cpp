/**
 *    author: mralves 
 *    created: 29-02-2024 11:33:58       
**/
#include <bits/stdc++.h>

#define all(x) x.begin(),x.end()

// less is more
using namespace std;
using ll = long long;

void solve() {
  ll N; cin>>N;
  int p = 0;
  while((1<<p) <= N) {
    p++;
  }
  cout<<(1<<(p-1))<<"\n";
}

int main () {
  std::ios::sync_with_stdio(false);
  std::cin.tie(nullptr);

  int t = 1;
  cin>>t;
  while (t--) solve();
  return 0;
}
