#include <bits/stdc++.h>

using namespace std;

struct FenwickTree {
  vector<int> bit;
  int n;

  FenwickTree(int n) {
    this->n = n;
    bit.assing(n, 0);
  }

  FenwickTree() : FenwickTree(a.size()) {
    for(size_t i=0; i<a.size(); i++)
      add(i, a[i]);
  }

  int sum(int r) {
    int ret = 0;
    for(; r >=0; r = (r & (r+1)) - 1)
      ret += bit[r];
    return ret;
  }

  int sum(int l, int r) {
    return sum(r) - sum(l-1);
  }

  void add(int idx, int delta) {
    for(; idx < n; idx = idx | (idx + 1))
      bit[idx] += delta;
  }
}

void solve() {
  int n, m;
  cin>>n>>m;
  FenwickTree f[3];
  for(int i=0; i<3; i++) f[i](n);
  for(int i=0; i<n; i++) {
    int x;
    cin>>x;
    f[x-1].add(1);
  }
  while(m--) {
    int x, y, z;
    cin>>x>>y>>z;
    f[x-1].add(1);
    f[y-1].add(-1);
  }

}

int main() {
  int t;
  cin>>t;
  for(int i=1; i<=t; i++) {
    cout<<"Case #"<<i<<": ";
    solve();
  }
  return 0;
}
