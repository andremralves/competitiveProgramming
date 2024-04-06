/**
 *    author: mralves 
 *    created: 30-03-2024 11:34:58       
**/
#include <bits/stdc++.h>

#define all(x) x.begin(),x.end()

// less is more
using namespace std;
using ll = long long;

void solve() {
  int N; cin>>N;
  vector<int> a(N);
  for(int i=0; i<N; i++) {
    cin>>a[i];
  }
  int mx = 0;
  for(int i=0; i<N; i++) {
    if(a[i] == 1) {
      cout<<mx<<" ";
      mx++;
    } else if(a[i] > 0) {
      cout<<mx<<" ";
      mx += a[i];
    } else {
      cout<<mx-a[i]<<" ";
    }
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
