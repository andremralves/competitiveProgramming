#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define lsOne(x) (x&-x)

struct BIT {
  int N;
  vector<ll> tree;
  BIT(int n) {
    N = n;
    tree.assign(n+1, 0);
  }
  ll mx(int i) {
    i++;
    ll res = tree[i];
    for(; i>0; i-=lsOne(i)) {
      res = max(tree[i], res);
    }
    return res;
  }

  void update(int i, ll v) {
    i++;
    for(; i<=N; i+=lsOne(i)) {
      tree[i] = max(tree[i], v);
    }
  }
};

int main() {
  //ios::sync_with_stdio(0);
  //cin.tie(0);
  int N; cin>>N;
  vector<ll> a(N);
  BIT pref(N), suf(N);
  for(int i=0; i<N; i++) {
    cin>>a[i];
    pref.update(i, a[i]+N-i-1);
  }
  for(int i =0; i<N; i++) {
    suf.update(i, a[N-i-1]+N-i-1);
  }

  ll ans = 1e10+10;
  for(int i=0; i<N; i++) {
    ll op = 0;
    op = max({pref.mx(i-1),
        suf.mx(N-i-2),
        a[i]});
    //cout<<pref.mx(i-1)<<" "<<a[i]<<" "<<suf.mx(N-i-1)<<"\n";
    ans = min(ans, op);
  }
  cout<<ans<<"\n";
  return 0;
}

// 2 1 5 6 4 3
// 2 2 7 9 8 8
// 7 5 8 8 5 3
