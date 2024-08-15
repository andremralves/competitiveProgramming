#include <bits/stdc++.h>

#define all(x) x.begin(),x.end()

// less is more
using namespace std;
using ll = long long;

void solve() {
  int a, b, c;
  cin>>a>>b>>c;
  swap(b, c);
  int ans = a;
  ans += c/3;
  c = c%3;
  if(b>=(3-c)%3) {
    b -= (3-c)%3;
    c += (3-c)%3;
  }
  ans += c/3;
  c = c%3;
  ans += b/3;
  b = b%3;
  ans += b/2;
  b = b%2;
  ans += b;
  if(!c) {
    cout<<ans<<"\n";
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
