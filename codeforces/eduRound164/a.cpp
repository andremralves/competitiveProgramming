#include <bits/stdc++.h>

#define all(x) x.begin(),x.end()

// less is more
using namespace std;
using ll = long long;

void solve() {
  int N, M, K;
  cin>>N>>M>>K;
  vector<int> a(N);
  for(int i=0; i<N; i++) {
    a[i] = i%M;
  }
  int cnt = 0;
  for(int i=0; i<N and cnt<K; i++) {
    if(a[i] != 0) {
      a[i] = 0;
      cnt++;
    }
  }
  for(int i=0; i<N; i++) {
    if(a[i] != 0) {
      cout<<"YES\n";
      return;
    }
  }
  cout<<"NO\n";
}

int main () {
  std::ios::sync_with_stdio(false);
  std::cin.tie(nullptr);

  int t = 1;
  cin>>t;
  while (t--) solve();
  return 0;
}
