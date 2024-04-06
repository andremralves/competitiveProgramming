/**
 *    author: mralves 
 *    created: 09-12-2023 13:10:18       
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

struct {
  bool operator()(array<ll, 4> A, array<ll, 4> B) const {
    return A[1] < B[1];
  }
} customless;

const ll INF = 1e9+5;
void solve() {
  int N;
  cin>>N;
  vector<array<ll, 4>> a(N);
  for(int i=0; i<N; i++) {
    ll x; cin>>x;
    a[i] = {x, i, 0, 0};
  }
  sort(all(a));
  ll sum = 0;
  for(int i=0; i<N; i++) {
    sum += a[i][0];
    array<ll, 4> find = {sum, INF, INF};
    a[i][3] = upper_bound(all(a), find)-a.begin()-1;
    a[i][2] = a[a[i][3]][1];
    //a[i][2] = max(a[i][2], (ll)0);
  }

  //sort(a.rbegin(), a.rend());
  sort(all(a), customless);

  //cout<<"OK\n";
  for(int i=0; i<N; i++) {
    int j = a[i][2];
    while(j != a[j][2]) {
      j = a[j][2];
    }
    cout<<a[j][3]<<" ";
  }

  cout<<"\n";
}

int main ()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int t = 1;
    cin>>t;
    while (t--) solve();
    return 0;
}
