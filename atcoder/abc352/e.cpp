#include "bits/stdc++.h"
#pragma GCC optimize ("O3")
#pragma GCC target ("sse4")
 
using namespace std;
 
typedef long long ll;
typedef long double ld;
typedef complex<ld> cd;
 
typedef pair<int, int> pi;
typedef pair<ll,ll> pl;
typedef pair<ld,ld> pd;
 
typedef vector<int> vi;
typedef vector<ld> vd;
typedef vector<ll> vl;
typedef vector<pi> vpi;
typedef vector<pl> vpl;
typedef vector<cd> vcd;

template<class T> using pq = priority_queue<T>;
template<class T> using pqg = priority_queue<T, vector<T>, greater<T>>;
 
#define FOR(i, a, b) for (int i=a; i<(b); i++)
#define F0R(i, a) for (int i=0; i<(a); i++)
#define FORd(i,a,b) for (int i = (b)-1; i >= a; i--)
#define F0Rd(i,a) for (int i = (a)-1; i >= 0; i--)
#define trav(a,x) for (auto& a : x)
#define uid(a, b) uniform_int_distribution<int>(a, b)(rng)
 
#define sz(x) (int)(x).size()
#define mp make_pair
#define pb push_back
#define f first
#define s second
#define lb lower_bound
#define ub upper_bound
#define all(x) x.begin(), x.end()
#define ins insert

template<class T> bool ckmin(T& a, const T& b) { return b < a ? a = b, 1 : 0; }
template<class T> bool ckmax(T& a, const T& b) { return a < b ? a = b, 1 : 0; }
 
mt19937 rng(chrono::steady_clock::now().time_since_epoch().count());

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


const int MOD = 1000000007;
const char nl = '\n';
const int MX = 100001; 

struct DSU {
  vector<int> e;
  DSU(int N) {
    e = vector<int>(N, -1);
  }
  int get(int i) {
    return (e[i]<0?i:e[i] = get(e[i]));
  }
  bool unite(int i, int j) {
    i = get(i); j = get(j);
    if(i == j) return false;
    if(e[j] < e[i])
      swap(i, j);
    e[i] += e[j];
    e[j] = i;
    return true;
  }
};

void solve() {
  int N, M;
  cin>>N>>M;
  vector<pair<int, vi>> G(M);
  vector<int> C(M);
  F0R(i, M) {
    int K; cin>>K>>G[i].f;
    G[i].s.assign(K, 0);
    F0R(j, K) {
      cin>>G[i].s[j];
      G[i].s[j]--;
    }
    sort(all(G[i].s));
  }
  sort(all(G));
  ll ans = 0;
  DSU dsu(N);
  F0R(i, M) {
    F0R(j, sz(G[i].s)-1) {
      if(dsu.get(G[i].s[j]) != dsu.get(G[i].s[j+1])) {
        dsu.unite(G[i].s[j], G[i].s[j+1]);
        ans += G[i].f;
      }
    }
  }
  bool ok = true;
  F0R(i, N-1) {
    if(dsu.get(i) != dsu.get(i+1)) ok = false;
  }
  cout<<(ok?ans:-1)<<nl;
}
 
int main() {
  ios_base::sync_with_stdio(0); cin.tie(0);

  int T = 1;
  //cin >> T;
  while(T--) {
    solve();
  }

  return 0;
}

