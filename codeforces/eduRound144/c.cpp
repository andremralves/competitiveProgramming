/**
 *    author: mralves 
 *    created: 21-01-2024 20:36:21       
**/
#include <bits/stdc++.h>

#define all(x) x.begin(),x.end()

// less is more
using namespace std;
using ll = long long;

void solve() {
  int l, r;
  cin>>l>>r;

  int mx = 1;
  int x = l;
  while(x*2 <= r) {
    x *= 2;
    mx++;
  }

  ll ans2 = r/(1<<(mx-1))-l+1;

  if(mx > 1)
    ans2 += max(0, (r/((1<<(mx-2))*3)-l+1)) * (mx-1);

  cout<<mx<<" "<<ans2<<"\n";

}

int main () {
  std::ios::sync_with_stdio(false);
  std::cin.tie(nullptr);

  int t = 1;
  cin>>t;
  while (t--) solve();
  return 0;
}
