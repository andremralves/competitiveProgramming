#include <bits/stdc++.h>
using namespace std;

const int MAXN = 200005;
const int INF = 1e9+5;
int T[4*MAXN];
void build(vector<int> &a, int v, int l, int r) {
  if(l == r) {
    T[v] = a[l];
    return;
  }
  int m = (r+l)/2;
  build(a, v*2, l, m);
  build(a, v*2+1, m+1, r);
  T[v] = min(T[v*2], T[v*2+1]);
}

int query(int v, int tl, int tr, int l, int r) {
    if (l > r) 
        return INF;
    if (l == tl && r == tr) {
        return T[v];
    }
    int tm = (tl + tr) / 2;
    return min(query(v*2, tl, tm, l, min(r, tm)),
           query(v*2+1, tm+1, tr, max(l, tm+1), r));
}

void update(int v, int l, int r, int i, int x) {
  if(l == r and i == l) {
    T[v] = x;
    return;
  }
  int m = (l+r)/2;
  if(i<=m)
    update(v*2, l, m, i, x);
  if(i>m)
    update(v*2+1, m+1, r, i, x);
  T[v] = min(T[v*2], T[v*2+1]);
}



int N, Q;
int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  cin>>N>>Q;
  vector<int> a(N);
  for(int i=0; i<N; i++) {
    cin>>a[i];
  }
  build(a, 1, 0, N-1);

  while(Q--) {
    int q, x, y;
    cin>>q>>x>>y;
    if(q == 1) {
      x--;
      update(1, 0, N-1, x, y);
    } else {
      x--, y--;
      cout<<query(1, 0, N-1, x, y)<<"\n";
    }
  }

}
