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

vi G[1001];
int vis[1001];
bool sides[4];
int N, M, K;
array<int, 3> sensors[1001];
void check(int X, int Y, int S) {
  if(X+S >= N) sides[2] = 1;
  if(X-S <= 0) sides[0] = 1;
  if(Y+S >= M) sides[3] = 1;
  if(Y-S <= 0) sides[1] = 1;
}

void dfs(int u) {
  if(vis[u]) return;
  auto [X, Y, S] = sensors[u];
  check(X, Y, S);
  vis[u] = 1;
  trav(v, G[u]) {
    dfs(v);
  }
}

void solve() {
  cin>>N>>M>>K;
  F0R(i, K) {
    int X, Y, S;
    cin>>X>>Y>>S;
    sensors[i] = {X, Y, S};
  }
  F0R(i, K) {
    F0R(j, K) {
      if(i != j) {
        int r1 = sensors[i][2];
        int r2 = sensors[j][2];
        int a = abs(sensors[i][0]-sensors[j][0]);
        int b = abs(sensors[i][1]-sensors[j][1]);
        if(1ll*(r1+r2)*(r1+r2) >= 1ll*a*a+1ll*b*b) {
          G[i].pb(j);
          G[j].pb(i);
        }
      }
    }
  }
  bool ok = true;
  F0R(i, K) {
    if(!vis[i]) {
      F0R(j, 4) sides[j] = 0;
      dfs(i);
      if(sides[0] && sides[2]) ok = false;
      if(sides[1] && sides[3]) ok = false;
      if(sides[0] && sides[1]) ok = false;
      if(sides[2] && sides[3]) ok = false;
    }
  }
  cout<<(ok?"S":"N")<<nl;
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

