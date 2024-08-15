#include <bits/stdc++.h>

#define all(x) x.begin(),x.end()

// less is more
using namespace std;
using ll = long long;

void solve() {
  int N; cin>>N;
  vector<int> a(N);
  vector<int> hist(N+1);
  int ans = 0;
  for(int i=0; i<N; i++) {
    cin>>a[i];
    hist[a[i]]++;
    if(hist[a[i]] == 2) ans++;
  }
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
