#include <bits/stdc++.h>

#define all(x) x.begin(),x.end()

// less is more
using namespace std;
using ll = long long;

void solve() {
  int N, M;
  cin>>N>>M;
  vector<int> a(N),b(N);
  for(int i=0; i<N; i++) {
    cin>>a[i];
  }
  for(int i=0; i<N; i++) {
    cin>>b[i];
  }
  vector<ll> ans;
  ll sum = 0;
  for(int i=N-1; i>=0; i--) {
    if(i < M) {
      ans.push_back(sum+a[i]);
    }
    sum += min(a[i], b[i]);
  }
  sort(ans.begin(), ans.end());
  cout<<ans[0]<<"\n";
}

int main () {
  std::ios::sync_with_stdio(false);
  std::cin.tie(nullptr);

  int t = 1;
  cin>>t;
  while (t--) solve();
  return 0;
}
