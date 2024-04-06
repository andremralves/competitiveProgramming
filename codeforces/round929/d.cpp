/**
 *    author: mralves 
 *    created: 27-02-2024 11:34:34       
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
  sort(a.begin(), a.end());
  if(N == 1) {
    cout<<"YES\n";
    return;
  }
  if(a[0] != a[1]) {
    cout<<"YES\n";
    return;
  }
  bool ok = false;
  for(int i=2; i<N; i++) {
    if(a[i]%a[0]) {
      ok = true;
      break;
    }
  }
  cout<<(ok?"YES":"NO")<<"\n";
}

int main () {
  std::ios::sync_with_stdio(false);
  std::cin.tie(nullptr);

  int t = 1;
  cin>>t;
  while (t--) solve();
  return 0;
}

// 7 7 8 9 4 4
// 7%4=3
