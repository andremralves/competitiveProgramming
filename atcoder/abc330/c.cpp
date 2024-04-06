/**
 *    author: mralves 
 *    created: 25-11-2023 09:00:50       
**/
#include <bits/stdc++.h>

#define pb(x) push_back(x)
#define all(x) x.begin(),x.end()

using namespace std;
using ll = int64_t;
using pii = pair<int, int>;

ll ceil(ll a, ll b) {return a % b == 0 ? a / b : a / b + 1;}
vector<pii> dir4 = {{1, 0}, {0, 1}, {-1, 0}, {0, -1}};
vector<pii> dir8 = {{1, 0}, {1, 1}, {0, 1}, {-1, 1}, {-1, 0}, {-1, -1}, {0, -1}, {1, -1}};

void solve() {
  ll D;
  cin>>D;

  ll x = 1, y = 1;

  vector<ll> xs;
  for(x=0; x*x<=D; x++) {
    xs.emplace_back(x*x);
  }

  ll ans = 1e9;
  for(y=0; y*y<=D; y++) {
    int x1 = upper_bound(all(xs), D-(y*y))-xs.begin();
    int x2 = x1-1;
    if(x1 < (int)xs.size())
      ans = min(abs(D-y*y-xs[x1]), ans);
    if(x2 >= 0)
      ans = min(abs(D-y*y-xs[x2]), ans);
  }
  cout<<ans<<"\n";
}

int main ()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int t = 1;
    while (t--) solve();
    return 0;
}
