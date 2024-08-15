#include <bits/stdc++.h>
#include <ext/pb_ds/tree_policy.hpp>
#include <ext/pb_ds/assoc_container.hpp>

using namespace std;
using namespace __gnu_pbds;
 
typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;
template <class T> using Tree = tree<T, null_type, less<T>, rb_tree_tag,tree_order_statistics_node_update>;

#define FOR(i, a, b) for (int i=a; i<(b); i++)
#define F0R(i, a) for (int i=0; i<(a); i++)
#define FORd(i,a,b) for (int i = (b)-1; i >= a; i--)
#define F0Rd(i,a) for (int i = (a)-1; i >= 0; i--)

#define sz(x) (int)(x).size()
#define mp make_pair
#define pb push_back
#define f first
#define s second
#define lb lower_bound
#define ub upper_bound

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

int n, co[71];
vector<ll> cur(1<<19), z(1<<19);
vi pri = {2,3,5,7,11,13,17,19,23,29,31,37,41,43,47,53,59,61,67};

int main() {
	ios_base::sync_with_stdio(0);cin.tie(0);
	cin >> n;
	F0R(i,n) {
	    int x; cin >> x;
	    for (int i: pri) while (x % (i*i) == 0) x /= (i*i);
	    co[x] ++;
	}
	
	cur[0] = 1;
	FOR(i,1,71) if (co[i]) {
	    ll mo = 1;
	    F0R(j,co[i]-1) mo = 2*mo % MOD;
	    
	    F0R(j,z.size()) z[j] = 0;
	    int tmp = 0;
	    F0R(j,pri.size()) if (i % pri[j] == 0) tmp ^= 1<<j;
	    
      dbg(tmp, mo);
      F0R(j, 16) {
        cout<<cur[j]<<" ";
      } 
      cout<<"\n";
	    F0R(j,cur.size()) {
	        z[j^tmp] += mo*cur[j];
	        z[j^tmp] %= MOD;
	        z[j] += mo*cur[j];
	        z[j] %= MOD;
	    }
      cout<<z[0]<<"\n";
	    swap(z,cur);
	}
	cur[0] = (cur[0]+MOD-1) % MOD;
	cout << cur[0];
}

// read!
// ll vs. int!
