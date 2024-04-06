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
  int N, M; cin>>N>>M;
  vector<int> a(N);
  for(int i=0; i<N; i++) {
    cin>>a[i];
  }
  string s; cin>>s;
  int l=0, r=N-1;
  for(int i=0; i<N; i++) {
    if(s[i] == 'L') l++;
    else r--;
  }
  vector<int> ans(N);
  int prod = 1;
  for(int i=N-1; i>=0; i--) {
    if(s[i] == 'L') {
      l--;
      prod *= a[l];
    } else {
      r++;
      prod *= a[r];
    }
    prod %= M;
    ans[i] = prod;
  }
  for(auto x:ans) {
    cout<<x<<" ";
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
