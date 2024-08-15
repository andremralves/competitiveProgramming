#include <bits/stdc++.h>

#define all(x) x.begin(),x.end()

// less is more
using namespace std;
using ll = long long;

void solve() {
  int N; cin>>N;
  vector<int> a(N);
  for(int i=0; i<N; i++) {
    cin>>a[i];
  }
  int cnt = 0;
  int ans = N;
  for(int i=0; i<N; i++) {
    if(a[i] == a[0]) {
      cnt++;
    } else {
      ans = min(cnt, ans);
      cnt = 0;
    }
  }
  ans = min(cnt, ans);
  if(cnt == N) {
    cout<<"-1\n";
  } else {
    cout<<ans<<"\n";
  }

}

int main () {
  std::ios::sync_with_stdio(false);
  std::cin.tie(nullptr);

  int t = 1;
  cin>>t;
  while (t--) solve();
  return 0;
}
