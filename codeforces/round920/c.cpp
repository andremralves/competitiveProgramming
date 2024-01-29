/**
 *    author: mralves 
 *    created: 15-01-2024 11:34:35       
**/
#include <bits/stdc++.h>

#define all(x) x.begin(),x.end()

// less is more
using namespace std;
using ll = long long;

void solve() {
  ll N, F, A, B;
  cin>>N>>F>>A>>B;
  vector<int> m(N);
  for(int i=0; i<N; i++) {
    cin>>m[i];
  }

  int last = 0;
  bool ok = true;
  for(int i=0; i<N; i++) {
    //cout<<"f:"<<F<<"\n";
    if(F <= 0) ok = false;
    F -= min((m[i]-last)*A, B);
    last = m[i];
  }
  //cout<<"f:"<<F<<"\n";
  if(F<=0) ok = false;
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
