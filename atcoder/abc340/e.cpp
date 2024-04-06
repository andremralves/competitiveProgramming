#include <bits/stdc++.h>
using namespace std;

using ll = long long;
const int MAXN = 2e5+10;
ll BIT[MAXN], N;
void update(int i, ll v) {
  for(i++; i<=N; i+=(i&-i)) {
    BIT[i] += v;
  }
}

void update(int l, int r, ll v) {
  update(l, v);
  update(r+1, -v);
}

ll query(int i) {
  ll res = 0;
  for(i++; i>0; i-=(i&-i)) {
    res += BIT[i];
  }
  return res;
}

int main() {
  int M; cin>>N>>M;

  for(int i=0; i<N; i++) {
    int a; cin>>a;
    update(i, i, a);
  }
  while(M--) {
    int m; cin>>m;
    ll tot = query(m);
    if(tot == 0) continue;
    update(m, m, -tot);
    ll cyc = tot/N;
    update(0, N-1, cyc);
    int res = tot%N;
    if(m+res >= N) {
      update(m+1, N-1, 1);
      update(0, (m+res)%N, 1);
    } else {
      update(m+1, m+res, 1);
    }
  }

  for(int i=0; i<N; i++) {
    cout<<query(i)<<" ";
  }
  cout<<"\n";

  return 0;
}
