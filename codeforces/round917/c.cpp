/**
 *    author: mralves 
 *    created: 24-12-2023 11:22:50       
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

void add(vector<int> &a, int d) {
  for(int i=0; i<d; i++) {
    a[i]++;
  }
}

int sum(vector<int> a) {
  int cnt = 0;
  for(int i=0; i<(int)a.size(); i++) {
    if(a[i] == i+1) cnt++;
  }
  return cnt;
}

void solve() {
  int N, K, D;
  cin>>N>>K>>D;

  vector<int> a(N), b(K);
  for(int i=0; i<N; i++) {
    cin>>a[i];
  }
  for(int i=0; i<K; i++) {
    cin>>b[i];
  }

  int ans = 0;
  for(int i=0; i<N*2 and i<D; i++) {
    int cnt = 0;
    for(int j=0; j<N; j++) {
      if(a[j] == j+1) cnt++;
    }
    ans = max(ans, cnt + (D-i-1)/2);
    for(int j=0; j<b[i%K]; j++) {
      a[j]++;
    }
  }
  cout<<ans<<"\n";
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
