/**
 *    author: mralves 
 *    created: 31-01-2024 10:41:55       
**/
#include <bits/stdc++.h>

#define all(x) x.begin(),x.end()

// less is more
using namespace std;
using ll = long long;

void solve() {
  int N; cin>>N;
  vector<int> a(N);
  int g = 0;
  int mn = 2e6+10;
  for(int i=0; i<N; i++) {
    cin>>a[i];
    a[i] += (int)1e6;
    mn = min(mn, a[i]);
  }
  for(int i=0; i<N; i++) {
    g = gcd(a[i]-mn, g);
  }

  if(g == 0)
    cout<<-1<<"\n";
  else 
    cout<<g<<"\n";


}

int main () {
  std::ios::sync_with_stdio(false);
  std::cin.tie(nullptr);

  int t = 1;
  cin>>t;
  while (t--) solve();
  return 0;
}
