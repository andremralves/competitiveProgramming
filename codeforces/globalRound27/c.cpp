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

void solve() {
    int N; cin>>N;

    if(N == 5) {
        cout<<5<<nl;
        cout<<"2 1 3 4 5\n";
        return;
    }

    int prevN = N;
    vi used(N+1);
    vi P;

    F0R(i, 2) {
        if(__builtin_popcount(N) == 1) {
            used[N] = 1;
            P.pb(N);
            N--;
        }
        
        if(N%2) {
            used[N] = 1;
            P.pb(N);
            N--;
        }
    }
    dbg(N);

    int p = 31-__builtin_clz(N);
    int x = (1<<p)-1;
    used[x] = 1;
    used[N] = 1;
    used[N-1] = 1;
    P.pb(x);
    P.pb(N);
    P.pb(N-1);

    F0R(i, prevN) {
        if(!used[i+1]) P.pb(i+1);
    }

    reverse(all(P));

    int K = 0;
    F0R(i, sz(P)) {
        if(i%2 == 0) {
            K &= P[i];
        } else {
            K |= P[i];
        }
        dbg(P[i], K);
    }
    cout<<K<<nl;
    trav(a, P) cout<<a<<" ";
    cout<<nl;
}

// 1000
// 0111

// 0000001
// 0000010
// 0000011
// 0000100
// 0000101
// 0000110
// 0000111
// 0001000
//
//
 

int main() {
  ios_base::sync_with_stdio(0); cin.tie(0);

  int T = 1;
  cin >> T;
  while(T--) {
    solve();
  }

  return 0;
}

