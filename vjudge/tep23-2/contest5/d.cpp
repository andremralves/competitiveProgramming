#include <bits/stdc++.h>
using namespace std;
using ll = long long;

const ll MAXK = 1e9+10;
int main() {
  std::ios::sync_with_stdio(false);
  std::cin.tie(nullptr);
  ll N, M;
  cin>>N>>M;
  vector<int> a(M);
  for(int i=0; i<M; i++) {
    cin>>a[i];
  }
  sort(a.begin(), a.end());
  a.push_back(N+1);
  M++;

  ll prev = 0;
  ll k = MAXK;
  for(int i=0; i<M; i++) {
    if(a[i]-prev-1 > 0)
      k = min(k, a[i]-prev-1);
    prev = a[i];
  }
  int ans = 0;
  prev = 0;
  for(int i=0; i<M; i++) {
    ll w = a[i]-prev-1;
    ans += (w+k-1)/k;
    prev = a[i];
  }

  cout<<ans<<"\n";
}
