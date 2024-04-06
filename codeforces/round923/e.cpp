/**
 *    author: mralves 
 *    created: 06-02-2024 11:43:54       
**/
#include <bits/stdc++.h>

#define all(x) x.begin(),x.end()

// less is more
using namespace std;
using ll = long long;

void solve() {
  int N, K; cin>>N>>K;
  vector<int> a(N);
  set<int> st; for(int i=1; i<=N; i++) st.insert(i);
  for(int i=1; i<=K; i++) {
    for(int j=i-1; j<N; j+=K) {
      if(j%2) {
        a[j] = *st.begin();
        st.erase(st.begin());
      } else {
        a[j] = *(--st.end());
        st.erase(--st.end());
      }

    }

  }
  for(auto x:a) {
    cout<<x<<" ";
  }
  cout<<"\n";
}

// 9 1 10 2 7 3 8 4 6 5
// 9 2 10 1 = 22
// 10 2 8 3 = 22
// 2 8 3 7 = 22

int main () {
  std::ios::sync_with_stdio(false);
  std::cin.tie(nullptr);

  int t = 1;
  cin>>t;
  while (t--) solve();
  return 0;
}
