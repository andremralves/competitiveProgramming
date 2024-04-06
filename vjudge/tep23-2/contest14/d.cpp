/**
 *    author: mralves 
 *    created: 05-12-2023 18:27:37       
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

const int MOD = 1e9+7;
void solve() {
  int N, K; 
  cin>>N>>K;

  vector<ll> psum(N+2);
  for(int i=0; i<=N; i++) {
    psum[i+1] = psum[i]+i;
  }

  ll ans = 0;
  for(int i=K; i<=N+1; i++) {
    ll top = psum[N+1]-psum[N+1-i];
    ans += top-psum[i]+1;
    ans %= MOD;
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
