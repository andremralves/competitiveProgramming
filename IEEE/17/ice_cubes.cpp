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

const ll INF = 1e6;

pair<ll, ll> dp[1001][1001];
void solve() {
  ll N, M, K, B;
  cin>>N>>M>>K>>B;
  vector<vector<ll>> grid(N, vector<ll>(M));
  for(int i=0; i<N; i++) {
    for(int j=0; j<M; j++) {
      cin>>grid[i][j];
    }
  }

  for(int i=0; i<N; i++) {
    for(int j=0; j<M; j++) {
      dp[i][j] = {-INF, 0};
    }
  }

  dp[0][0] = {grid[0][0], (grid[0][0] < B)};
  for(int i=0; i<N; i++) {
    for(int j=0; j<M; j++) {
      if(i < N-1) {
        if(dp[i][j].second+(grid[i+1][j] < B) < K) {
          if(dp[i+1][j].first < dp[i][j].first + grid[i+1][j]) {
            dp[i+1][j].first = dp[i][j].first + grid[i+1][j];
            dp[i+1][j].second = (grid[i+1][j] < B) ? dp[i][j].second + 1 : 0;
          }
        }
      }
      if(j < M-1) {
        if(dp[i][j].second+(grid[i][j+1] < B) < K) {
          if(dp[i][j+1].first < dp[i][j].first + grid[i][j+1]) {
            dp[i][j+1].first = dp[i][j].first + grid[i][j+1];
            dp[i][j+1].second = (grid[i][j+1] < B) ? dp[i][j].second + 1 : 0;
          }
        }
      }
    }
  }

  if(dp[N-1][M-1].first < 0)
    cout<<"IMPOSSIBLE\n";
  else
    cout<<dp[N-1][M-1].first<<"\n";




}

int main ()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int t = 1;
    cin>>t;
    for(int i=1; i<=t; i++) {
      cout<<"Case "<<i<<": ";
      solve();
    }
    return 0;
}
