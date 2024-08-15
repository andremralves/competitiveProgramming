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
const ll INF = 1e18;

vector<pair<int, int>> dir4 = {{1, 0}, {0, 1}, {-1, 0}, {0, -1}};
void solve() {
  int H, W, C; cin>>H>>W>>C;

  vector<vi> A(H, vi(W));
  F0R(i, H) {
    F0R(j, W) {
      cin>>A[i][j];
    }
  }

  vector<pair<int, pi>> points;
  ll sum = 0;
  F0R(i, H) {
    F0R(j, W) {
      sum += A[i][j];
      points.push_back({A[i][j], {i, j}});
    }
  }
  sort(all(points));

  ll ans = INF;
  {
    int it = 0;
    F0R(t, sz(points)) {
      auto [v, p] = points[t];
      auto [i, j] = p;
      queue<pi> que;
      unordered_set<int> vis;
      vis.insert(i*W+j);
      que.push({i, j});
      while(!que.empty()) {
        auto [x, y] = que.front();
        que.pop();
        if(i != x || j != y) {
          int dis = abs(i-x)+abs(j-y);
          ckmin(ans, A[i][j]+A[x][y]+1ll*dis*C);
          it++;
        }
        if(it >= (int)1e7) break;
        for(auto [dx, dy] : dir4) {
          int a = dx+x;
          int b = dy+y;
          if(a<0 || b <0 || a >= H || b >= W) continue;
          if(vis.count(a*W+b)) continue;
          int dis1 = abs(i-a)+abs(j-b);
          if(1ll*dis1*C > ans) continue;
          vis.insert(a*W+b);
          que.push({a, b});
        }
      }
      if(it >= (int)1e7) break;
    }
    dbg(it);
  } 
  {
    int it = 0;
    F0R(i, sz(points)) {
      FOR(j, i+1, sz(points)) {
        auto [v1, p1] = points[i];
        auto [v2, p2] = points[j];
        int dis = abs(p1.f-p2.f)+abs(p1.s-p2.s);
        if(v1+v2 > ans) break;
        //dbg(v1+v2+1ll*dis*C);
        ckmin(ans, v1+v2+1ll*dis*C);
        it++;
        if(i == j+1 && dis == 1) {
          cout<<ans<<nl;
          return;
        }
      }
      if(it >= (int)1e7) break;
    }
  }
  cout<<ans<<nl;
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

