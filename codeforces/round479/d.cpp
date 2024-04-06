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
  int N; cin>>N;
  vector<ll> a(N);
  vector<vector<int>> G(N), rev(N);
  map<ll, vector<int>> mp;
  for(int i=0; i<N; i++) {
    cin>>a[i];
    mp[a[i]].push_back(i);
  }
  for(int i=0; i<N; i++) {
    if(a[i]%3==0 and mp[a[i]/3].size() > 0) {
      int j = mp[a[i]/3].back();
      mp[a[i]/3].pop_back();
      G[i].push_back(j);
    } else if(mp[a[i]*2].size() > 0){
      int j = mp[a[i]*2].back();
      mp[a[i]*2].pop_back();
      G[i].push_back(j);
    }
  }
  for(int i=0; i<N; i++) {
    for(auto j:G[i]) {
      rev[j].push_back(i);
    }
  }
  int s;
  for(int i=0; i<N; i++) {
    if(rev[i].size() == 0) {
      s = i; break;
    }
  }
  while(G[s].size()) {
    cout<<a[s]<<" ";
    s = G[s].back();
  }
  cout<<a[s]<<"\n";
}

int main () {
  std::ios::sync_with_stdio(false);
  std::cin.tie(nullptr);

  int t = 1;
  while (t--) solve();
  return 0;
}
