#include <bits/stdc++.h>
#include <sys/resource.h>

#define pb(x) push_back(x)
#define all(x) x.begin(),x.end()

using namespace std;
using ll = int64_t;
using ii = pair<int, int>;

ll ceil(ll a, ll b) {return a % b == 0 ? a / b : a / b + 1;}
vector<ii> dir4 = {{1, 0}, {0, 1}, {-1, 0}, {0, -1}};
vector<ii> dir8 = {{1, 0}, {1, 1}, {0, 1}, {-1, 1}, {-1, 0}, {-1, -1}, {0, -1}, {1, -1}};

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

void solve() {
  int R, C;
  cin>>R>>C;
  vector<string> grid(R);
  for(int i=0; i<R; i++) {
    cin>>grid[i];
  }

  vector<vector<int>> used(R, vector<int>(C));
  pair<int, int> pos;
  map<pair<int, int>, int> mp;
  auto dfs = [&](auto &&dfs, int i, int j, int &cnt, int &whites) {
    if(used[i][j]) return;
    used[i][j] = true;
    if(grid[i][j] == '.') {
      pos = {i, j};
      cnt++;
      return;
    }
    whites++;

    for(auto [x, y] : dir4) {
      if(i+x < 0 or i+x >= R or j+y < 0 or j+y >= C) continue;
      if(grid[i+x][j+y] == 'B') continue;
      dfs(dfs, i+x, j+y, cnt, whites);
    }
  };

  for(int i=0; i<R; i++) {
    for(int j=0; j<C; j++) {
      if(!used[i][j] and grid[i][j] == 'W') {
        int cnt = 0, whites = 0;
        dfs(dfs, i, j, cnt, whites);
        if(cnt == 1) {
          mp[pos] += whites;
        }
      }
    }
  }
  int ans = 0;
  for(auto p: mp) {
    ans = max(p.second, ans);
  }
  cout<<ans<<"\n";

}

int main() {
  std::ios::sync_with_stdio(false);
  std::cin.tie(nullptr);
  int t;
  cin>>t;
  for(int i=1; i<=t; i++) {
    cout<<"Case #"<<i<<": ";
    solve();
  }
  return 0;
}


