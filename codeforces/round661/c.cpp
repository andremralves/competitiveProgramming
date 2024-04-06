/**
 *    author: mralves 
 *    created: 11-02-2023 01:24:35       
**/
#include <bits/stdc++.h>

#define pb(x) push_back(x)

using namespace std;
using ll = int64_t;

void solve() {
  int N; cin>>N;
  vector<int> ws(N);
  for(int i=0; i<N; i++) {
    cin>>ws[i];
  }
  int mw = N*2;
  int ans = 0;
  for(int s=1; s<=mw; s++) {
    map<int, int> mp;
    int cnt = 0;
    for(int i=0; i<N; i++) {
      if(mp[s-ws[i]] > 0) {
        cnt++;
        mp[s-ws[i]]--;
        mp[ws[i]]--;
      } 
      //cout<<mp[s-ws[i]]<<" ";
      mp[ws[i]]++;
    }
    ans = max(ans, cnt);
  }
  cout<<ans<<"\n";
}

int main () {
    int t;
    cin>>t;
    while (t--)
    {
        solve();    
    }
    return 0;
}
