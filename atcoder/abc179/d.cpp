/**
 *    author: mralves 
 *    created: 17-02-2024 17:35:45       
**/
#include <bits/stdc++.h>

#define all(x) x.begin(),x.end()

// less is more
using namespace std;
using ll = long long;

const int MAXN = 200005;
ll BIT[MAXN];
int N, K;
const int MOD = 998244353;
void update(int i, ll v) {
  v %= MOD;
  if(v < 0) v += MOD;
  for(++i;i<=N;i+=i&-i) {
    BIT[i] += v;
    BIT[i] %= MOD;
  }
}

void update(int l, int r, ll v) {
  update(l, v);
  update(r+1, -v);
}


ll query(int i) {
  ll res = 0;
  for(++i; i>=1; i-=i&-i) {
    res += BIT[i];
    res %= MOD;
  }
  return res;
}


void solve() {
  cin>>N>>K;

  vector<int> L(K), R(K);
  for(int i=0; i<K; i++) {
    cin>>L[i]>>R[i];
  }

  update(0, 0, 1);
  for(int i=0; i<N; i++) {
    ll d = query(i);
    for(int j=0; j<K; j++) {
      if(i+L[j] >= N) continue;
      update(i+L[j], min(i+R[j], N-1), d);
    }
  }
  cout<<query(N-1)<<"\n";

}

int main () {
  std::ios::sync_with_stdio(false);
  std::cin.tie(nullptr);

  int t = 1;
  while (t--) solve();
  return 0;
}
