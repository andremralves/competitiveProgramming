/**
 *    author: mralves 
 *    created: 29-01-2024 09:27:29       
**/
#include <bits/stdc++.h>

#define all(x) x.begin(),x.end()

// less is more
using namespace std;
using ll = long long;


bool check(vector<int> &col) {
  for(int i=1; i<11; i++) {
    if(col[i] == 0) continue;
    col[i]--;
    set<int> st;
    for(int j=1; j<11; j++) {
      if(col[j] != 0) {
        st.insert(col[j]);
      }
    }
    col[i]++;
    if(st.size() == 1) return true;
  }
  return false;
}

void solve() {
  int N; cin>>N;
  vector<int> a(N);
  for(int i=0; i<N; i++) {
    cin>>a[i];
  }

  vector<int> color(11);
  int ans = 1;
  for(int i=0; i<N; i++) {
    color[a[i]]++;
    if(check(color)) {
      ans = i+1;
    }
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
