/**
 *    author: mralves 
 *    created: 06-10-2023 16:14:29       
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

map<ll, ll> fact(ll N) {
  map<ll, ll> mp;
  for(ll i=2; i*i<=N; i++) {
    while(N%i == 0) {
      N/=i;
      mp[i]++;
    }
  }
  if(N > 1) {
    mp[N]++;
  }
  return mp;
}

void solve() {
  ll N;
  cin>>N;

  //vector<ll> look(1000);
  //look[0] = 1;
  //for(int i=1; i<1000; i++) {
  //  look[i] = look[i-1] + (i+1);
  //}
  map<ll, ll> mp;
  mp = fact(N);
  int ans = 0;
  for(auto [a, b]: mp) {
    //ans += upper_bound(all(look), b) - look.begin();
    int cnt = 1;
    while(b-cnt >= 0) {
      ans++;
      b-=cnt;
      cnt++;
    }
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
