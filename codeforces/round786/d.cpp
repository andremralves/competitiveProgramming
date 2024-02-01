/**
 *    author: mralves 
 *    created: 01-02-2024 05:24:25       
**/
#include <bits/stdc++.h>

#define all(x) x.begin(),x.end()

// less is more
using namespace std;
using ll = long long;

void solve() {
  int N; cin>>N;
  vector<int> a(N), b(N);
  for(int i=0; i<N; i++) {
    cin>>a[i];
    b[i] = a[i];
  }
  sort(b.begin(), b.end());
  bool ok = true;
  int i = 0;
  if(N%2) {
    if(a[i] != b[i]) ok = false;
    i++;
  }
  for(; i<N; i+=2) {
    if(!ok) break;
    int tmp[2];
    tmp[0] = a[i];
    tmp[1] = a[i+1];
    sort(tmp, tmp+2);
    if(tmp[0] != b[i] or tmp[1] != b[i+1]) {
      ok = false;
    }
  }
  cout<<(ok?"YES\n":"NO\n");
}

int main () {
  std::ios::sync_with_stdio(false);
  std::cin.tie(nullptr);

  int t = 1;
  cin>>t;
  while (t--) solve();
  return 0;
}
