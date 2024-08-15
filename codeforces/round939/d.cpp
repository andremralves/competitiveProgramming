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
  map<int, vector<pair<int, int>>> mp;
  for(int M=1; M<=N; M++) {
    vector<int> b = a;
    vector<pair<int, int>> ops;
    for(int i=0; i<N-M+1; i++) {
      int sum = 0;
      for(int j=i; j<i+M; j++) {
        sum += b[j];
      }
      if(sum > M*M) continue;
      for(int j=i; j<i+M; j++) {
        b[j] = M;
      }
      ops.emplace_back(i+1, M+i);
      for(int i=0; i<N; i++) {
      }
    }
    int sum = accumulate(b.begin(), b.end(), 0);
    mp[sum] = ops;
  }
  auto [ans, ops] = *mp.rbegin();
  cout<<ans<<" ";
  cout<<ops.size()<<"\n";
  for(auto [x, y]:ops) {
    cout<<x<<" "<<y<<"\n";
  }
}

int main () {
  std::ios::sync_with_stdio(false);
  std::cin.tie(nullptr);

  int t = 1;
  while (t--) solve();
  return 0;
}
