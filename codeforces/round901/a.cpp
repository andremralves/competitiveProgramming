/**
 *    author: mralves 
 *    created: 10-01-2024 23:05:08       
**/
#include <bits/stdc++.h>

#define all(x) x.begin(),x.end()

// less is more
using namespace std;
using ll = long long;

void solve() {
  int a, b;
  cin>>a>>b;
  int N; cin>>N;
  vector<int> A(N);
  for(int i=0; i<N; i++) {
    cin>>A[i];
  }
  sort(all(A));

  long long ans = 0;
  for(int i=0; i<N; i++) {
    ans+=b;
    b = 1;
    b = min(a, b+A[i]);
    b--;
  }
  cout<<ans+b<<"\n";


}

int main () {
  std::ios::sync_with_stdio(false);
  std::cin.tie(nullptr);

  int t = 1;
  cin>>t;
  while (t--) solve();
  return 0;
}
