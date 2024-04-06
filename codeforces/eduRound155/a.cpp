/**
 *    author: mralves 
 *    created: 20-01-2024 19:46:47       
**/
#include <bits/stdc++.h>

#define all(x) x.begin(),x.end()

// less is more
using namespace std;
using ll = long long;

void solve() {
  int N; cin>>N;
  vector<int> s(N), e(N);
  for(int i=0; i<N; i++) {
    cin>>s[i];
    cin>>e[i];
  }

  int w = s[0];
  int x = e[0];
  bool ok = true;
  for(int i=1; i<N; i++) {
    if(s[i] >= w and e[i] >= x) {
      ok = false;
    }
  }
  if(ok) {
    cout<<w<<"\n";
  } else {
    cout<<"-1\n";
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
