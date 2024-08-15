#include <bits/stdc++.h>

#define all(x) x.begin(),x.end()

// less is more
using namespace std;
using ll = long long;

void solve() {
  int N; cin>>N;
  string s; cin>>s;
  vector<int> pref(N+1), suf(N+1);
  for(int i=1; i<=N; i++) {
    pref[i] += pref[i-1];
    if(s[i-1] == '0') pref[i]++;
  }
  for(int i=N-1; i>=0; i--) {
    suf[i] += suf[i+1];
    if(s[i] == '1') suf[i]++;
  }

  int ans = N*2;
  for(int i=0; i<=N; i++) {
    int x = (i+1)/2;
    int y = (N-i+1)/2;
    //cout<<pref[i]<<" "<<suf[i]<<"\n";
    if(pref[i] >= x and suf[i] >= y) {
      if(abs((double)N/2-i) < abs((double)N/2-ans))
        ans = i;
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
