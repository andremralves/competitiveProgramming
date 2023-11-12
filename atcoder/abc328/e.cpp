/**
 *    author: mralves 
 *    created: 11-11-2023 08:58:27       
**/
#include <bits/stdc++.h>

#define pb(x) push_back(x)
#define all(x) x.begin(),x.end()

using namespace std;
using ll = int64_t;
using pii = pair<int, int>;

void __print(int x) {cerr << x;}
void __print(long x) {cerr << x;}
void __print(long long x) {cerr << x;}
void __print(unsigned x) {cerr << x;}
void __print(unsigned long x) {cerr << x;}
void __print(unsigned long long x) {cerr << x;}
void __print(float x) {cerr << x;}
void __print(double x) {cerr << x;}
void __print(long double x) {cerr << x;}
void __print(char x) {cerr << '\'' << x << '\'';}
void __print(const char *x) {cerr << '\"' << x << '\"';}
void __print(const string &x) {cerr << '\"' << x << '\"';}
void __print(bool x) {cerr << (x ? "true" : "false");}
 
template<typename T, typename V>
void __print(const pair<T, V> &x) {cerr << '{'; __print(x.first); cerr << ", "; __print(x.second); cerr << '}';}
template<typename T>
void __print(const T &x) {int f = 0; cerr << '{'; for (auto &i: x) cerr << (f++ ? ", " : ""), __print(i); cerr << "}";}
void _print() {cerr << "]\n";}
template <typename T, typename... V>
void _print(T t, V... v) {__print(t); if (sizeof...(v)) cerr << ", "; _print(v...);}
#ifdef DEBUG
#define dbg(x...) cerr << "\e[91m"<<__func__<<":"<<__LINE__<<" [" << #x << "] = ["; _print(x); cerr << "\e[39m" << endl;
#else
#define dbg(x...)
#endif

ll ceil(ll a, ll b) {return a % b == 0 ? a / b : a / b + 1;}
vector<pii> dir4 = {{1, 0}, {0, 1}, {-1, 0}, {0, -1}};
vector<pii> dir8 = {{1, 0}, {1, 1}, {0, 1}, {-1, 1}, {-1, 0}, {-1, -1}, {0, -1}, {1, -1}};

// 1 2 3 4 5
struct DSU {
  // store the negative sizes
  vector<int> e;
  DSU(int N) {e = vector<int>(N, -1);}
  int get(int x) {
    return e[x] < 0 ? x : e[x] = get(e[x]);
  }
  bool same_set(int a, int b) {
    return get(a) == get(b);
  }
  int size(int x) { return -e[get(x)]; }
  bool unite(int x, int y) {
    x = get(x); y = get(y);
    if(x == y) return false;
    // because e[x] is negative
    if(e[x] > e[y]) swap(x, y);
    e[x] += e[y];
    e[y] = x;
    return true;
  }
};

void solve() {
  ll N, M, K;
  cin>>N>>M>>K;

  // read the edges
  vector<array<ll, 3>> ed(M);
  for(int i=0; i<M; i++) {
    ll u, v, w;
    cin>>u>>v>>w;
    u--, v--;
    ed[i] = {u, v, w};
  }

  vector<int> comb(M);
  ll ans = K;
  for(int i=M-N+1; i<M; i++) comb[i] = 1;
  do {
    DSU dsu(N);
    ll acc = 0;
    for(int i=0; i<M; i++) {
      if(comb[i]) {
        if(!dsu.unite(ed[i][0], ed[i][1])) {
          acc = K;
          break;
        }
        acc += ed[i][2];
        acc %= K;
      }
    }
    ans = min(ans, acc);
  } while(next_permutation(all(comb)));
  cout<<ans<<"\n";
}

int main ()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int t = 1;
    while (t--) solve();
    return 0;
}
