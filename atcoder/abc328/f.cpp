#include <bits/stdc++.h>
using namespace std;

struct DSU {
  vector<int> e, w;
  // hold the negative size of each group
  DSU(int N) { 
    e = vector<int>(N, -1);
    w = vector<int>(N);
  }
  int get(int x) { 
    if(e[x] < 0) {
      return x;
    } else {
      e[x] = get[e[x]];
      w[x] += w[e[x]];
      return e[x];
    }
    //return e[x] < 0 ? x : e[x] = get(e[x]); 
  }
  bool unite(int x, int y) {
    x = get(x), y = get(y);
    if(w[x] w[y]) return false;
    // swap if > because it's negative
    if(e[x] > e[y]) swap(x, y);

    e[x] += e[y];
    e[y] = x;
    return true;
  }
}

using pii = pair<int, int>;
int main() {
  int N, Q;
  cin>>N>>Q;
  map<pii, int> mp;
  vector<int> ans;
  for(int i=1; i<=Q; i++) {
    int a, b, d;
    cin>>a>>b>>d;
     
  }
  cout<<"\n";
  return 0;
}
