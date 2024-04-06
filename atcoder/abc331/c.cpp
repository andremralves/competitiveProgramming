/**
 *    author: mralves 
 *    created: 02-12-2023 09:00:47       
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
  int N;
  cin>>N;
  vector<pii> a(N);
  ll sum = 0;
  vector<ll> psum(N+1);
  for(int i=0; i<N; i++) {
    int x; cin>>x;
    a[i] = {x, i};
  }

  sort(all(a));

  for(int i=0; i<N; i++) {
    psum[i+1] = psum[i]+a[i].first;
  }
  map<ll, ll> mp;
  for(int i=0; i<N; i++) {
    int pos = upper_bound(all(a), make_pair(a[i].first, (int)1e7))-a.begin()-1;
    mp[a[i].second] = psum[N]-psum[pos+1];
  }

  for(auto [x, y]: mp) {
    cout<<y<<" ";
  }
  cout<<"\n";

}

int main ()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int t = 1;
    while (t--) solve();
    return 0;
}
