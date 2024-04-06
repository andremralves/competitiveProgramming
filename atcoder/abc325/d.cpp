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
  int N;
  cin>>N;

  map<ll, ll> mp;
  for(int i=0; i<N; i++) {
    ll t, d;
    cin>>t>>d;
    mp[t]++;
    mp[t+d]--;
  }
  vector<pair<ll, ll>> a(mp.begin(), mp.end());

  a.push_back({a.back().first+1, 0});
  ll ans = 0, cur = 0;
  ll prev = 0;
  for(int i=0; i<(int)a.size(); i++) {
    ans += min(a[i].first-prev, cur);
    cur += a[i].second;
    prev = a[i].first;
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
