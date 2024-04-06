/**
 *    author: mralves 
 *    created: 02-12-2023 09:00:47       
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

int count_black(vector<string> grid, int x, int y) {
  int cnt = 0;
  for(int i=x; i<(int)grid.size(); i++) {
    for(int j=y; j<(int)grid.size(); j++) {
      if(grid[i][j] == 'B') cnt++;
    }
  }
  return cnt;
}

void solve() {
  int N, Q; cin>>N>>Q;
  vector<string> grid(N);
  for(int i=0; i<N; i++) {
    cin>>grid[i];
  }

  map<pii, int> mp;
  for(int i=0; i<N; i++) {
    for(int j=0; j<N; j++) {
      mp[pii(i, j)] = count_black(grid, i, j);
    }
  }
  for(auto x: mp) {
    dbg(x);
  }

  while(Q--) {
    int A, B, C, D;
    cin>>A>>B>>C>>D;
    int a = A%N;
    int b = B%N;
    int c = C%N;
    int d = D%N;

    dbg(mp[pii(a, b)]);
    dbg(mp[pii(c, d)]);
    dbg(mp[pii(c, b)]);
    dbg(mp[pii(a, d)]);
    
    cout<<mp[pii(a, b)]+mp[pii(c, d)]-mp[pii(c, b)]-mp[pii(a, d)]<<"\n";




  }
}

int main ()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int t = 1;
    while (t--) solve();
    return 0;
}
