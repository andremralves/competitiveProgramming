/**
 *    author: mralves 
 *    created: 14-01-2024 09:01:23       
**/
#include <bits/stdc++.h>

#define all(x) x.begin(),x.end()

// less is more
using namespace std;
using ll = long long;

void solve() {
  int N; cin>>N;
  vector<int> a(N);
  for(int i=0; i<N; i++) cin>>a[i];

  int l = 0, r = 0;
  for(; r<N;) {
    bool ok = true;
    int cnt = 1;
    int tl = l, tr = r;
    while(tl<=tr) {
      if(a[tl] < cnt or a[tr] < cnt) {
        ok = false;
        break;
      }
      cnt++;
      tl++, tr--;
    }
    if(ok) r+=2;
    else {
      l++;
      r++;
    }
  }
  cout<<(r-l)/2<<"\n";
}

int main () {
  std::ios::sync_with_stdio(false);
  std::cin.tie(nullptr);

  int t = 1;
  while (t--) solve();
  return 0;
}
