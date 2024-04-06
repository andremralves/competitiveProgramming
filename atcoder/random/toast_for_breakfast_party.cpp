#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int main() {
  int N, M;
  cin>>N>>M;
  vector<ll> a(N), b(M);
  for(int i=0; i<N; i++) cin>>a[i];
  sort(a.rbegin(), a.rend());
  for(int i=0; i<M; i++) {
    b[i] = a[i];
  }
  int j = M-1;
  for(int i=M; i<N; i++) {
    b[j--] += a[i];
  }

  ll ans = 0;
  for(int i=0; i<M; i++) {
    ans += b[i]*b[i];
  }
  cout<<ans<<"\n";
  return 0;
}
