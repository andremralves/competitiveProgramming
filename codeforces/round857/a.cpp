#include <bits/stdc++.h>
using namespace std;

void solve() {
  int N; cin>>N;
  vector<int> a(N);
  int neg = 0, pos = 0;
  for(int i=0; i<N; i++) {
    cin>>a[i];
    if(a[i] < 0)
      neg++;
    else
      pos++;
  }

  for(int i=1; i<=N; i++) {
    cout<<min(pos, i)-(i-min(pos, i))<<" ";
  }
  cout<<"\n";
  for(int i=1; i<=N; i++) {
    int x = min(i/2, neg);
    cout<<i-x*2<<" ";
  }
  cout<<"\n";
}

int main() {
  int t=1;
  cin>>t;
  while(t--)
    solve();
  return 0;
}
