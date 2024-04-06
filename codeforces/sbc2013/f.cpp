#include <bits/stdc++.h>

using namespace std;

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  int N; cin>>N;

  vector<int> a(N);
  set<int> st;
  st.emplace(0);
  int sum = 0;
  for(int i=0; i<N; i++) {
    cin>>a[i];
    sum+=a[i];
    if(i != N-1)
      st.emplace(sum);
  }

  int ans = 0;
  if(sum%3) {
    cout<<ans<<"\n";
  } else {
    int arc = sum/3; 
    for(auto x: st) {
      if(st.count(x+arc) and st.count(x+arc+arc)) {
        ans ++;
      }
    }
    cout<<ans<<"\n";
  }
  return 0;
}
