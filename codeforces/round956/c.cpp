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
const int MX = 200001; 

vi test(6), ans(6);
int A[MX], B[MX], C[MX];
int N;
ll tot = 0;
bool ok = false;
void dfs(int i, int l, ll cur1, ll cur2, ll cur3) {
  dbg(test);
  vi prev = test;
  if(ok) return;
  if(count(all(test), -1) == 0) {
    ok = true;
    ans = test;
    return;
  }
  if(i == N) return;
  cur1 += A[i];
  cur2 += B[i];
  cur3 += C[i];

  ll X = (tot+2)/3;
  if(max({cur1, cur2, cur3}) < X) {
    dfs(i+1, l, cur1, cur2, cur3);
  } else {
  if(cur1 >= X && test[0] == -1) {
    test[0] = l+1; test[1] = i+1;
    dfs(i+1, i+1, 0, 0, 0);
    test = prev;
  }
  if(cur2 >= X && test[2] == -1) {
    test[2] = l+1; test[3] = i+1;
    dfs(i+1, i+1, 0, 0, 0);
    test = prev;
  }
  if(cur3 >= X && test[4] == -1) {
    test[4] = l+1; test[5] = i+1;
    dfs(i+1, i+1, 0, 0, 0);
    test = prev;
  }
  }
}

void solve() {
  cin>>N;
  tot = 0;
  ok = false;
  F0R(i, N) {
    cin>>A[i];
    tot += A[i];
  }
  F0R(i, 6) ans[i] = test[i] = -1;
  F0R(i, N) cin>>B[i];
  F0R(i, N) cin>>C[i];
  dfs(0, 0, 0, 0, 0);


  int mx = 0;
  F0R(i, 6) {
    ckmax(mx, ans[i]);
    if(ans[i] == -1) {
      cout<<-1<<nl;
      return;
    }
  }
  F0R(i, 6) {
    if(i%2 == 0) {
      cout<<ans[i]<<" ";
    } else {
      cout<<(ans[i] == mx ? N:ans[i])<<" ";
    }
  }
  cout<<nl;


}
 
int main() {
  ios_base::sync_with_stdio(0); cin.tie(0);

  int T = 1;
  cin >> T;
  while(T--) {
    solve();
  }

  return 0;
}

