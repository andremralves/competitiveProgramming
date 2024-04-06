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

void solve() {
  int n;
  cin>>n;
  map<string, vector<pair<string, string>>> g;
  set<string> safe;
  for(int i=0; i<n; i++) {
    char s1[6], s2[3], s3[6];
    cin>>s1>>s2>>s3;
    if(s2[0] == '-') {
      g[s1].push_back({s3, s2});
      safe.insert(s3);
    }
    else {
      g[s1].push_back({s3, s2});
      g[s3].push_back({s1, s2});
    }
  }

  vector<string> que;
  set<string> used;
  set<string> newsafe;
  auto dfs = [&](auto && dfs, string u) {
    if(used.count(u)) return;
    used.insert(u);

    for(auto v: g[u]) {
      if(v.second == "??") {
        newsafe.insert(v.first);
        dfs(dfs, v.first);
      }
    }
  };
  for(auto s:safe) {
    if(used.count(s) != 0) continue;
    dfs(dfs, s);
  }

  //for(auto s: safe) {
  //  if(used.count(s) != 0) continue;
  //  que.push_back(s);
  //  used.insert(s);
  //  for(int i=0; i<(int)que.size(); i++) {
  //    string u = que[i];
  //    dbg(u);
  //    for(auto v:g[u]) {
  //      if(used.count(v.first)) continue;
  //      if(v.second == "??") {
  //        used.insert(v.first);
  //        que.push_back(v.first);
  //        newsafe.insert(v.first);
  //      }
  //    }
  //  }
  //}

  for(auto [key,_]: g) {
    if(newsafe.count(key) == 0 and safe.count(key) == 0) {
      cout<<key<<"\n";
    }
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
