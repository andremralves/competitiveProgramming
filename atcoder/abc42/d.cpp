#include <bits/stdc++.h>

using namespace std;

using ll = long long;
const int MOD = 1e9+7;
long long binpow(long long A, long long B) {
  A %= MOD;
  long long res = 1;
  while(B) {
    if(B&1) {
      res = res * A % MOD;
    }
    A = A*A%MOD;
    B /= 2;
  }
  return res;
}

const int MAXN = 2e5+10;
ll fact[MAXN], inv[MAXN], factinv[MOD];

ll binom(int N, int R) {
  ll comp = fact[N]*inv[R]%MOD;
  return comp*inv[N-R]%MOD;
}

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  int H, W, A, B;
  cin>>H>>W>>A>>B;

  fact[0] = 1;
  for(int i=1; i<=W+H; i++) {
    fact[i] = i*fact[i-1]%MOD;
  }

  // m = k*a+r
  // inv[a] = -k*inv[r]
  // inverse of factorial[i]
  inv[0] = 1;
  for(int i=1; i<=W+N; i++) {
    inv[i] = int[i-1]
  }

  for(int i=0; i<=W+H; i++) {
    inv[i] = binpow(fact[i], MOD-2);
  }

  ll ans = 0;
  for(int i=B; i<W; i++) {
    int N = (H-A)+i-1;
    int R = i;
    //cout<<A+W-i-2<<" "<<W-i-1<<"\n";
    ans += binom(N, R)*binom(A+W-i-2, W-i-1)%MOD;
    ans %= MOD;
    //cout<<N<<" "<<R<<": ";
    //cout<<binom(N, R)<<" "<<binom(A+W-i-2, W-i-1)<<"\n";
    //cout<<ans<<"\n";
  }
  cout<<ans<<"\n";
  return 0;
}


