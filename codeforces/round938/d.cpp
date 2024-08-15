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
    cin>>a[i];
  }
  map<int, int> mp;
  for(int i=0; i<M; i++) {
    int x; cin>>x;
    mp[x]++;
  }

  int cnt = 0;
  int ans = 0;
  map<int, int> cur;
  for(int i=0; i<M; i++) {
    cur[a[i]]++;
    if(cur[a[i]] <= mp[a[i]]) {
      cnt++;
    }
  }
  if(cnt >= K) ans++;
  for(int i=M; i<N; i++) {
    cur[a[i-M]]--;
    if(cur[a[i-M]] < mp[a[i-M]]) cnt--;
    cur[a[i]]++;
    if(cur[a[i]] <= mp[a[i]]) cnt++;
    //cout<<"cnt:"<<cnt<<"\n";
    if(cnt >= K) ans++;
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
