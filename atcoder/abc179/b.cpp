/**
 *    author: mralves 
 *    created: 17-02-2024 17:35:45       
**/
#include <bits/stdc++.h>

#define all(x) x.begin(),x.end()

// less is more
using namespace std;
using ll = long long;

void solve() {
  int N; cin>>N;
  int d1[N], d2[N];
  bool ok = false;
  for(int i=0; i<N; i++) {
    cin>>d1[i]>>d2[i];
    if(i > 1 and d1[i] == d2[i] and d1[i-1] == d2[i-1] and d1[i-2] == d2[i-2]) {
      ok = true;
    }
  }
  cout<<(ok?"Yes\n":"No\n");
}

int main () {
  std::ios::sync_with_stdio(false);
  std::cin.tie(nullptr);

  int t = 1;
  while (t--) solve();
  return 0;
}
