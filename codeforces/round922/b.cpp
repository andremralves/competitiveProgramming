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
  int N; cin>>N;
  vector<int> a(N), b(N);
  for(int i=0; i<N; i++) cin>>a[i];
  for(int i=0; i<N; i++) cin>>b[i];

  vector<int> p(N);
  iota(p.begin(), p.end(), 0);
  sort(p.begin(), p.end(), [&](int lhs, int rhs) {
      return a[lhs] < a[rhs];
      });

  for(int i=0; i<N; i++) {
    cout<<a[p[i]]<<" ";
  }
  cout<<"\n";
  for(int i=0; i<N; i++) {
    cout<<b[p[i]]<<" ";
  }
  cout<<"\n";
}

int main () {
  std::ios::sync_with_stdio(false);
  std::cin.tie(nullptr);

  int t = 1;
  cin>>t;
  while (t--) solve();
  return 0;
}
