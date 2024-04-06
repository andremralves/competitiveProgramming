#include <bits/stdc++.h>
using namespace std;

void solve() {
  int N; cin>>N;
  vector<int> a(N+1);
  set<int> st;
  for(int i=1; i<=N; i++) st.insert(i);
  for(int i=1; i<=N; i++) {
    cin>>a[i];
  }

  vector<int> b(N+1);
  int k = 0;
  for(int i=1; i<=N; i++) {
    if(st.count(a[i])) {
      st.erase(a[i]);
      b[i] = a[i];
      k++;
    } else {
      if(*st.begin() != i) {
        b[i] = *st.begin();
        st.erase(st.begin());
      } else if(st.size() >= 2){
        b[i] = *(++st.begin());
        st.erase(++st.begin());
      }
    }
  }
  for(int i=1; i<=N; i++) {
    if(b[i] == 0) {
      int pos = find(b.begin(), b.end(), a[i]) - b.begin();
      b[i] = b[pos];
      b[pos] = *st.begin();
      break;
    }
  }
  cout<<k<<"\n";
  for(int i=1; i<=N; i++) {
    cout<<b[i]<<" ";
  }
  cout<<"\n";
}

int main() {
  int t;
  cin>>t;
  while(t--) {
    solve();
  }
  return 0;
}
