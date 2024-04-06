#include <bits/stdc++.h>
using namespace std;

using ll = long long;

void solve() {
  int N; cin>>N;
  vector<int> a(N), b(N);
  for(int i=0; i<N; i++) {
    cin>>a[i];
  }

  for(int i=0; i<N; i++) {
    cin>>b[i];
  }

  vector<int> used(N);
  for(int i=0; i<N; i++) {
    auto lo = lower_bound(b.begin(), b.end(), a[i]);
    cout<<*lo-a[i]<<" ";
    used[lo-b.begin()]++;
  }
  cout<<"\n";


  int acc = 0;
  vector<int> d(N);
  int r = N-1;
  for(int i=N-1; i>=0; i--) {
    d[i] = b[r]-a[i];
    acc += used[i];
    if(acc >= N-i) r=i-1;
  }
  for(auto x: d) {
    cout<<x<<" ";
  }
  cout<<"\n";
}

int main() {
  ios::sync_with_stdio(0);
  cin.tie();
  int t; cin>>t;
  while(t--) solve();
  return 0;
}
