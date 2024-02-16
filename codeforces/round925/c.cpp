#include <bits/stdc++.h>
using namespace std;

void solve() {
  int N; cin>>N; 
  vector<int> a(N);
  for(int i=0; i<N; i++) cin>>a[i];
  int l = 0, r = N-1;
  while(l<N and a[l] == a[0]) l++;
  while(r>=0 and a[r] == a[N-1]) r--;
  if(a[0] == a[N-1]) {
    cout<<max(0, r-l+1)<<"\n";
  } else {
    cout<<min(r+1, N-l)<<"\n";
  }
}

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  int t = 0;
  cin>>t;
  while(t--) solve();
  return 0;
}
