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

const int MAXN = 1e5+5;
void solve() {
  int N; cin>>N;
  vector<int> a(N);
  for(int i=0; i<N; i++) {
    cin>>a[i];
  }

  vector<int> color(MAXN), cnt(MAXN);
  set<int> st;
  int ans = 1;
  vector<int> big;
  int one = 0, mx = 0;
  for(int i=0; i<N; i++) {
    if(color[a[i]] == 0) one++;
    else if(color[a[i]] == 1) one--;
    if(color[a[i]] == mx) {
      big.clear();
      big.push_back(a[i]);
    } else if(color[a[i]] == mx-1) {
      big.push_back(a[i]);
    }
    color[a[i]]++; st.insert(a[i]);
    mx = max(mx, color[a[i]]);

    //cout<<big.size()<<"\n";
    if(mx > 1 and big.size() == 1) {
      if(i/(mx-1) == (int)st.size()) {
        ans = i+1;
      }
    } else if(one >= 1){
      if(i/mx == (int)st.size()-1) {
        ans = i+1;
      }
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

