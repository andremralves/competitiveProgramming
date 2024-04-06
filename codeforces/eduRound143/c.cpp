/**
 *    author: mralves 
 *    created: 22-01-2024 21:10:48       
**/
#include <bits/stdc++.h>

#define all(x) x.begin(),x.end()

// less is more
using namespace std;
using ll = long long;

void solve() {
  int N; cin>>N; 
  vector<ll> a(N), b(N);
  for(int i=0; i<N; i++) {
    cin>>a[i];
  }
  for(int i=0; i<N; i++) {
    cin>>b[i];
  }

  ll sum = 0;
  for(int i=0; i<N; i++) {
    a[i] += sum;
    sum += b[i];
  }
  for(auto x:a) {
    cout<<x<<" ";
  }
  cout<<"\n";

  for(int i=0; i<N; i++) {
    cout<<a[i]/(b[i])<<" ";
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
