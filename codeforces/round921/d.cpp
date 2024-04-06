/**
 *    author: mralves 
 *    created: 27-01-2024 20:50:52       
**/
#include <bits/stdc++.h>

#define all(x) x.begin(),x.end()

// less is more
using namespace std;
using ll = long long;

const int MOD = 1e9+7;

ll binpow(ll a, ll b) {
  a %= MOD;
  ll res = 1;
  while(b) {
    if(b&1) {
      res = res*a%MOD;
    }
    b /= 2;
    a = a*a%MOD;
  }
  return res;
}

const int MAXN = 1e5+10;
ll fact[MAXN];
void pre() {
  fact[0] = 1;
  for(ll i=1; i<MAXN; i++) {
    fact[i] = i*fact[i-1]%MOD;
  }
}

ll binom(ll a, ll b) {
  ll div = fact[b]*fact[a-b]%MOD;
  return fact[a]*binpow(div, MOD-2)%MOD;
}

void solve() {
  ll N, M, K;
  cin>>N>>M>>K;

  ll sum = 0;
  for(int i=0; i<M; i++) {
    int a, b, x;
    cin>>a>>b>>x;
    sum += x;
  }

  ll div = binom(N, 2);
  ll cur = (K*sum%MOD)*binpow(div, MOD-2)%MOD;
  ll add = (M*K*(K-1)/2)%MOD*binpow(div, MOD-2)%MOD;
  cout<<(cur+add)%MOD<<"\n";
}

int main () {
  std::ios::sync_with_stdio(false);
  std::cin.tie(nullptr);
  pre();
  int t = 1;
  cin>>t;
  while (t--) solve();
  return 0;
}
