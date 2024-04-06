/**
 *    author: mralves 
 *    created: 17-02-2024 17:35:45       
**/
#include <bits/stdc++.h>

#define all(x) x.begin(),x.end()

// less is more
using namespace std;
using ll = long long;

void solve() {
  ll N, X, M;
  cin>>N>>X>>M;
  ll cur = X;
  set<ll> st;
  vector<ll> seq;
  ll cyc = 0;
  while(st.count(cur) == 0) {
    cyc += cur;
    st.insert(cur);
    seq.emplace_back(cur);
    cur *= cur;
    cur %= M;
  }
  for(auto x:seq) {
    cout<<x<<" ";
  }
  cout<<"\n";
  ll ans = 0;
  // before cycle
  int p = find(seq.begin(), seq.end(), cur)-seq.begin();
  N-= p;
  ll bef = accumulate(seq.begin(), seq.begin()+p, 0ll);
  ans += bef;
  cyc -= bef;
  int cyc_t = seq.size()-p+1;
  ans += (N/cyc_t)*cyc;
  int rem = N%cyc_t;
  ans += accumulate(seq.begin()+p, seq.begin()+p+rem, 0ll);
  cout<<ans<<"\n";
}

int main () {
  std::ios::sync_with_stdio(false);
  std::cin.tie(nullptr);

  int t = 1;
  while (t--) solve();
  return 0;
}
