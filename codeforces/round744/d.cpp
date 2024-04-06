/**
 *    author: mralves 
 *    created: 31-01-2024 04:09:39       
**/
#include <bits/stdc++.h>

#define all(x) x.begin(),x.end()

// less is more
using namespace std;
using ll = long long;

void solve() {
  int N; cin>>N;
  vector<int> a(N);
  set<pair<int, int>> st;
  for(int i=0; i<N; i++) {
    cin>>a[i];
    if(a[i]) {
      st.insert({a[i], i+1});
    }
  }
  vector<pair<int, int>> ops;
  while(st.size() >= 2) {
    auto end = st.end();
    auto it = --end;
    auto it2 = --end;
    pair<int, int> x = *it, y = *it2;
    st.erase(it);
    st.erase(it2);
    x.first--, y.first--;
    if(x.first > 0)
      st.insert(x);
    if(y.first > 0)
      st.insert(y);
    ops.push_back({x.second, y.second});
  }
  cout<<ops.size()<<"\n";
  for(auto op:ops) {
    cout<<op.first<<" "<<op.second<<"\n";
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
