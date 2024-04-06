/**
 *    author: mralves 
 *    created: 08-12-2023 14:31:57       
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

const ll MOD = 1e9+7;

ll binpow(ll a, ll b) {
  a %= MOD;
  ll res = 1;
  while(b) {
    if(b&1) res = a * res % MOD;
    a = a * a % MOD;
    b /= 2;
  }
  return res;
}


void solve() {
  ll N; cin>>N;
  ll ans = (binpow(10, N)-binpow(9, N)-binpow(9, N)+binpow(8, N)) % MOD;
  if(ans < 0)
    ans += MOD;
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
