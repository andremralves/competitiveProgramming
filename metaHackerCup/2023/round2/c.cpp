#include <bits/stdc++.h>

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

void bfs(vector<vector<int>> g, int pos, set<int> &used) {
  vector<int> que;
  que.push_back(pos);
  for(int i=0; i<(int)que.size(); i++) {
    for(auto v: g[que[i]]) {
      used.insert(v);
      que.push_back(v);
    }
  }
}

void solve() {
  int N;
  cin>>N;
  vector<int> p;
  p.push_back(-1);
  set<int> st;
  vector<vector<int>> g(N);
  for(int i=0; i<N-1; i++) {
    int x;
    cin>>x;
    p.push_back(x-1);
    st.insert(x-1);
    g[x-1].push_back(i+1);
  }

  set<string> topics;
  map<int, set<string>> mp;
  for(int i=0; i<N; i++) {
    int q;
    cin>>q;
    while(q--) {
      string t;
      cin>>t;
      mp[i].insert(t);
      topics.insert(t);
    }
  }

  map<string, int> mp2;
  ll ans = 0;
  for(auto t: topics) {
    set<int> used;
    bool allgood = true;
    for(int i=0; i<N; i++) {
      if(st.count(i)) continue;
      //dbg(i);
      bool ok = false;
      int prev = i;
      for(int cur=i; cur != -1; cur = p[cur]) {
        if(used.count(cur) == 1) break;
        if(mp[cur].count(t)) {
          used.insert(cur);
          ok = true;
          bfs(g, prev, used);
          break;
        }
        prev = cur;
      }
      if(!ok) {
        allgood = false;
        break;
      }
    }
    //dbg(t);
    if(allgood) {
      ans++;
    }
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


