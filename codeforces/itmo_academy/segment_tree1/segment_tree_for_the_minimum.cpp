#include <bits/stdc++.h>

using namespace std;
using ll = long long;

// two types of operations
// set(i, v) set a[i] to v
// sum(l, r) return the som of a segment
// sum -> [l, r)

const int MAXN = 1e6;
const ll INF = 1e9+10;
int n;
ll t[4*MAXN];

//void build(int a[], int v, int tl, int tr) {
//  if(tl == tr) {
//    t[v] = a[tl];
//  } else {
//    int tm = (tl+tr)/2;
//    build(a, v*2, tl, tm);
//    build(a, v*2+1, tm+1, tr);
//    t[v] = t[v*2] + t[v*2+1];
//  }
//}

void build(int a[], int v, int tl, int tr) {
  if(tl == tr) {
    t[v] = a[tl];
  } else {
    int tm = (tl+tr)/2;
    build(a, v*2, tl, tm);
    build(a, v*2+1, tm+1, tr);
    t[v] = min(t[v*2], t[v*2+1]);
  }
}

ll sum(int v, int tl, int tr, int l, int r) {
  if (l > r) {
    return 0ll;
  }
  if(l == tl && r == tr) {
    return t[v];
  }
  int tm = (tl +tr)/2;
  return sum(v*2, tl, tm, l, min(r, tm))
      + sum(v*2+1, tm+1, tr, max(l, tm+1), r);
}

// min version
ll mini(int v, int tl, int tr, int l, int r) {
  if(l > r) {
    return INF;
  }
  if(l == tl && r == tr) {
    return t[v];
  }
  int tm = (tl+tr)/2;
  return min(mini(v*2, tl, tm, l, min(r, tm)),
      mini(v*2+1, tm+1, tr, max(l, tm+1), r));
}

void update(int v, int tl, int tr, int pos, int new_val) {
  if(tl == tr) {
    t[v] = new_val;
  } else {
    int tm = (tl+tr)/2;
    if(pos <= tm)
      update(v*2, tl, tm, pos, new_val);
    else
      update(v*2+1, tm+1, tr, pos, new_val);
    t[v] = min(t[v*2], t[v*2+1]);
  }
}

int a[100000];
int main() {
  int m;
  cin>>n>>m;
  for(int i=0; i<n; i++) {
    cin>>a[i];
  }
  build(a, 1, 0, n-1);
  while(m--) {
    int op;
    cin>>op;
    if(op == 1) {
      int i, v;
      cin>>i>>v;
      update(1, 0, n-1, i, v);
    } else {
      int l, r;
      cin>>l>>r;
      ll mi = mini(1, 0, n-1, l, r-1);
      cout<<mi<<"\n";
    }
  }
  return 0;
}

