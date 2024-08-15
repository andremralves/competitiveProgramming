#include <bits/stdc++.h>

#define all(x) x.begin(),x.end()

// less is more
using namespace std;
using ll = long long;

void solve() {
  int N, K;
  cin>>N>>K;
  K--;
  vector<int> a(N);
  for(int i=0; i<N; i++) {
    cin>>a[i];
  }

  int idx = 0;
  for(int i=0; i<K; i++) {
    if(a[i] > a[K]) {
      idx = i;
      break;
    }
  }

  swap(a[0], a[K]);
  int ans = 0;
  for(int i=1; i<N; i++) {
    if(a[i] < a[0]) ans++;
    else break;
  }
  swap(a[0], a[K]);

  swap(a[idx], a[K]);
  int cnt = 0;
  if(idx > 0) cnt++;
  for(int i=idx+1; i<N; i++) {
    if(a[i] < a[idx]) cnt++;
    else break;
  }
  ans = max(ans, cnt);
  cout<<ans<<"\n";
}

int main () {
  std::ios::sync_with_stdio(false);
  std::cin.tie(nullptr);

  int t = 1;
  cin>>t;
  while (t--) solve();
  return 0;
}
