#include <bits/stdc++.h>
using namespace std;
using ll = long long;

const ll INF = 1e18+10;
int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  int N; cin>>N;
  vector<int> a(N), b(N), x(N);
  for(int i=0; i<N-1; i++) {
    cin>>a[i]>>b[i]>>x[i];
    x[i]--;
  }

  vector<ll> dp(N, INF);
  dp[0] = 0;
  vector<bool> used(N);
  set<pair<ll, int>, vector<pair<ll, int>>, greater<pair<ll, int>>> pq;
  auto dfs = [&](auto &&self, int i) -> void {
    //cout<<i<<" "<<dp[i]<<"\n";
    if(i == N-1 or used[i]) return;
    used[i] = 1;
    pq.emplace(dp[i]+a[i], i+1);
    pq.emplace(dp[i]+b[i], x[i]);
    while(!pq.empty()) {
      auto nxt = pq.top();
      pq.pop();
      if(nxt.first < dp[nxt.second]) {
        dp[nxt.second] = nxt.first;
        self(self, nxt.second);
      }
    }
  };
  dfs(dfs, 0);
  cout<<dp[N-1]<<"\n";
  return 0;
}

