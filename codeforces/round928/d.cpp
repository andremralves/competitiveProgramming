/**
 *    author: mralves 
 *    created: 19-02-2024 11:32:51       
**/
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
  map<int, int> mp;
  int ans = 0;
  for(int i=0; i<N; i++) {
    int rev = 0;
    for(int j=0; j<31; j++) {
      rev += (~a[i])&(1<<j);
    }
    //cout<<a[i]<<" "<<rev<<"\n";
    if(mp[rev] > 0) {
      mp[rev]--;
    } else {
      ans++;
      mp[a[i]]++;
    }
  }
  cout<<ans<<"\n";
}

int main () {
  std::ios::sync_with_stdio(false);
  std::cin.tie(nullptr);

  int t = 1;
  cin>>t;
  while (t--) solve();
  return 0;
}
