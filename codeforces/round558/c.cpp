/**
 *    author: mralves 
 *    created: 29-01-2024 09:27:29       
**/
#include <bits/stdc++.h>

#define all(x) x.begin(),x.end()

// less is more
using namespace std;
using ll = long long;

const int MAXN = 1e5+10;
int X[MAXN], Y[MAXN];
void solve() {
  int N; cin>>N;

  for(int i=0; i<N; i++) {
    cin>>X[i]>>Y[i];
  }

  map<pair<int, int>, set<ll>> slope_map;
  ll count = 0, ans = 0;
  for(int i=0; i<N; i++) {
    for(int j=i+1; j<N; j++) {
      int a = -(Y[i]-Y[j]);
      int b = (X[i]-X[j]);
      int d = gcd(a, b); a /= d; b /= d;
      if(a < 0 || (a == 0 && b < 0)) {
        a = -a;
        b = -b;
      }
      ll c = 1ll * a * X[i] + 1ll*b*Y[i];
      pair<int, int> slope(a, b);
      if(!slope_map[slope].count(c)) {
        count++;
        slope_map[slope].insert(c);
        ans += count - slope_map[slope].size();
      }
    }
  }
  cout<<ans<<"\n";
}

int main () {
  std::ios::sync_with_stdio(false);
  std::cin.tie(nullptr);

  int t = 1;
  while (t--) solve();
  return 0;
}
