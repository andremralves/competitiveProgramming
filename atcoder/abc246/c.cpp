/**
 *    author: mralves 
 *    created: 21-02-2024 02:13:43       
**/
#include <bits/stdc++.h>

#define all(x) x.begin(),x.end()

// less is more
using namespace std;
using ll = long long;

void solve() {
  int N, K, X; cin>>N>>K>>X;
  priority_queue<int> pq;
  for(int i=0; i<N; i++) {
    int x; cin>>x;
    pq.push(x);
  }
  while(!pq.empty() and K) {
    int cur = pq.top();
    pq.pop();
    int take = min(max(1, cur/X), K);
    K -= take;
    cur -= take*X;
    if(cur > 0)
      pq.push(cur);
  }
  ll ans = 0;
  while(!pq.empty()) {
    ans += pq.top();
    pq.pop();
  }
  cout<<ans<<"\n";
}

int main () {
  std::ios::sync_with_stdio(false);
  std::cin.tie(nullptr);

  int t = 1;
  while (t--) solve();
  return 0;
}
