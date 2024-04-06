/**
 *    author: mralves 
 *    created: 23-02-2024 00:40:02       
**/
#include <bits/stdc++.h>

#define all(x) x.begin(),x.end()

// less is more
using namespace std;
using ll = long long;

void solve() {
  int N, K; cin>>N>>K;
  vector<int> a(N);
  for(int i=0; i<N; i++) cin>>a[i];
  sort(a.begin(), a.end());
  int ans = -1;
  for(int i=0; i<N; i++) {
    int j = i;
    while(j<N and a[j] == a[i]) j++;
    if(j == K) {
      ans = a[j-1];
      break;
    }
    i = j-1;
  }
  if(K == 0 and 1 < a[0]) cout<<1<<"\n";
  else cout<<ans<<"\n";
}

int main () {
  std::ios::sync_with_stdio(false);
  std::cin.tie(nullptr);

  int t = 1;
  while (t--) solve();
  return 0;
}
