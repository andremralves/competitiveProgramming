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
    int N, Q; cin>>N>>Q;
    vi A(N); F0R(i, N) {
        cin>>A[i];
        A[i]--;
    }
    string S; cin>>S;

    vi sp(N-1), needed(N-1);
    F0R(i, N) {
        if(i  > 0 && S[i] == 'L') {
            sp[i-1]++;
        }
        if(i < N-1 && S[i] == 'R') {
            sp[i]++;
        }
    }

    vi P(N+1);
    F0R(i, N) {
        if(A[i] < i) {
            P[A[i]]++; P[i]--;
        } else if(A[i] > i) {
            dbg(i, A[i]+1);
            P[i]++; P[A[i]]--;
        }
    }

    int cur = 0;
    F0R(i, N-1) {
        cur += P[i];
        if(cur > 0) needed[i] = 1;
    }
    dbg(needed);

    int bad = 0;
    F0R(i, N-1) {
        if(needed[i] && sp[i] == 0) bad++;
    }

    dbg(sp);
    while(Q--) {
        int i; cin>>i; i--;
        if(S[i] == 'L') {
            if(i) {
                sp[i-1]--;
                if(sp[i-1] == 0 && needed[i-1]) bad++;
            }
            if(i < N-1) {
                sp[i]++;
                if(sp[i] == 1 && needed[i]) bad--;
            }
            S[i] = 'R';

        } else {
            if(i < N-1) {
                sp[i]--;
                if(sp[i] == 0 && needed[i]) bad++;
            }
            if(i) {
                sp[i-1]++;
                if(sp[i-1] == 1 && needed[i-1]) bad--;
            }
            S[i] = 'L';
        }
        dbg(sp);
        dbg(bad);
        dbg(S);

        if(bad) cout<<"NO"<<nl;
        else cout<<"YES"<<nl;
    }
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

