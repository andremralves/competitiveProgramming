#include <bits/stdc++.h>
using namespace std;

void solve() {
  int N; cin>>N;
  vector<int> a(N);
  for(int i=0; i<N; i++) {
    cin>>a[i];
  }
  sort(a.begin(), a.end());
  int cnt = 0;
  int s = (N+1)/2-1;
  for(int i=s; i<N and a[i]==a[s]; i++) {
    cnt++;
  }
  cout<<cnt<<"\n";
}

int main() {
  int t; cin>>t;
  while(t--) solve();
  return 0;
}
