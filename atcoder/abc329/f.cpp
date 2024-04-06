/**
 *    author: mralves 
 *    created: 18-11-2023 08:59:15       
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

struct DSU {
  // store the negative sizes
  vector<int> e;
  vector<set<int>> c;
  DSU(int N, vector<int> a) {
    e = vector<int>(N, -1);
    c = vector<set<int>>(N);
    for(int i=0; i<N; i++) {
      c[i].insert(a[i]);
    }
  }
  int get(int x) {
    return e[x] < 0 ? x : e[x] = get(e[x]);
  }
  bool same_set(int a, int b) {
    return get(a) == get(b);
  }
  int size(int x) { return -e[get(x)]; }
  int balls(int x) {return c[get(x)].size();}
  bool unite(int x, int y) {
    x = get(x); y = get(y);
    if(x == y) return false;
    // because e[x] is negative
    if(e[x] > e[y]) swap(x, y);
    e[x] += e[y];
    e[y] = x;
    c[x].insert(all(c[y]));
    return true;
  }
};
void solve() {
  int N, Q;
  cin>>N>>Q;
  vector<int> c(N);
  vector<set<int>> cs(N);
  map<int, int> mp;
  for(int i=0; i<N; i++) {
    cin>>c[i];
    cs[i].insert(c[i]);
    mp[i] = i;
  }

  while(Q--) {
    int a, b;
    cin>>a>>b;
    a--, b--;
    if(cs[mp[a]].size() > cs[mp[b]].size()) {
      swap(mp[a], mp[b]);
    } 
    cs[mp[b]].insert(cs[mp[a]].begin(), cs[mp[a]].end());
    cs[mp[a]] = {};
    cout<<cs[mp[b]].size()<<"\n";
  }
}

int main ()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int t = 1;
    while (t--) solve();
    return 0;
}
