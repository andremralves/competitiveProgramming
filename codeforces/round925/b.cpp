#include <bits/stdc++.h>
using namespace std;

void solve() {
  int N; cin>>N;
  vector<int> a(N);
  bool ok = true;
  int sum = 0;
  for(int i=0; i<N; i++) {
    cin>>a[i];
    sum += a[i];
  }
  if(sum%N) {
    cout<<"NO\n";
    return;
  }

  for(int i=0; i<N-1; i++) {
    if(a[i] < sum/N) {
      ok = false;
      break;
    }
    a[i+1] += a[i]-(sum/N);
  }
  cout<<(ok?"YES":"NO")<<"\n";
}

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  int t = 0;
  cin>>t;
  while(t--) solve();
  return 0;
}

