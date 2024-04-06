/**
 *    author: mralves 
 *    created: 29-01-2024 09:27:29       
**/
#include <bits/stdc++.h>

#define all(x) x.begin(),x.end()

// less is more
using namespace std;
using ll = long long;

void solve() {
  int N, M; cin>>N>>M;
  vector<int> isin(N, 1);
  int cnt = 0;
  for(int i=0; i<N; i+=2) {
    if(cnt < M) {
      isin[i] = 0;
      cnt++;
    }
  }

  for(int i=0; i<N; i++) {
    if(cnt < M and isin[i]) {
      isin[i] = 0;
      cnt++;
    }
  }

  int ans = 0;
  for(int i=0; i<N; i++) {
    int j = i;
    if(isin[i] == 0) continue;
    while(j < N and isin[j] == 1) {
      j++;
    }
    ans++;
    i = j;
  }
  cout<<ans<<"\n";
}

int main () {
  std::ios::sync_with_stdio(false);
  std::cin.tie(nullptr);

  int t = 1;
  //cin>>t;
  while (t--) solve();
  return 0;
}
