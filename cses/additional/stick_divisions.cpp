#include <bits/stdc++.h>
using namespace std;

using ll = long long;

ll ans = 0;
int main() {
  ll X, N;
  cin>>X>>N;
  priority_queue<int, vector<int>, greater<int>> pq;
  for(int i=0; i<N; i++) {
    int x; cin>>x;
    pq.push(x);
  }
  while(!pq.empty()) {
    if(pq.size() == 1) {
      pq.pop();
    } else {
      int f = pq.top(); pq.pop();
      int s = pq.top(); pq.pop();
      ans += s+f;
      pq.push(f+s);
    }
  }
  cout<<ans<<"\n";
  return 0;
}
