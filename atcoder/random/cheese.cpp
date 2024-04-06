#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
  int N, W;
  cin>>N>>W;
  vector<pair<int, int>> a(N);
  for(int i=0; i<N; i++) {
    int aa, b;
    cin>>aa>>b;
    a[i] = make_pair(aa, b);
  }
  sort(a.rbegin(), a.rend());
  ll ans = 0;
  for(int i=0; i<N; i++) {
    auto [aa, b] = a[i];
    int take = min(b, W);
    W -= take;
    ans += (ll)take * aa; 
  }
  cout<<ans<<"\n";
  return 0;
}
