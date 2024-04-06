/**
 *    author: mralves 
 *    created: 23-02-2024 11:35:46       
**/
#include <bits/stdc++.h>

#define all(x) x.begin(),x.end()

// less is more
using namespace std;
using ll = long long;

void solve() {
  int N; cin>>N;
  vector<int> a(N);
  int lastone = 0;
  int firstone = -1;
  for(int i=0; i<N; i++) {
    cin>>a[i];
    if(a[i] == 1) lastone = i;
    if(firstone == -1 and a[i] == 1) firstone = i;
  }
  if(firstone == -1) cout<<0<<"\n";
  else cout<<count(a.begin()+firstone, a.begin()+lastone, 0)<<"\n";
}

int main () {
  std::ios::sync_with_stdio(false);
  std::cin.tie(nullptr);

  int t = 1;
  cin>>t;
  while (t--) solve();
  return 0;
}
