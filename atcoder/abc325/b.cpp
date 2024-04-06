/**
 *    author: mralves 
 *    created: 21-10-2023 08:58:57       
**/
#include <bits/stdc++.h>

#define pb(x) push_back(x)
#define all(x) x.begin(),x.end()

using namespace std;
using ll = int64_t;
using ii = pair<int, int>;

ll ceil(ll a, ll b) {return a % b == 0 ? a / b : a / b + 1;}
vector<ii> dir4 = {{1, 0}, {0, 1}, {-1, 0}, {0, -1}};
vector<ii> dir8 = {{1, 0}, {1, 1}, {0, 1}, {-1, 1}, {-1, 0}, {-1, -1}, {0, -1}, {1, -1}};

void solve() {
  int n;
  cin>>n;
  vector<ii> a(n);
  for(int i=0; i<n; i++) {
    int x, y;
    cin>>x>>y;
    a[i] = {x, y};
  }

  ll ans = 0;
  for(int i=0; i<24; i++) {
    ll cnt = 0;
    for(int j=0; j<n; j++) {
      if((a[j].second + i)%24 < 9 or (a[j].second+i)%24 >= 18)  continue;
      cnt += a[j].first;
    }
    ans = max(cnt, ans);
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
