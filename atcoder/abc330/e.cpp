/**
 *    author: mralves 
 *    created: 25-11-2023 09:00:50       
**/
#include <bits/stdc++.h>

#define pb(x) push_back(x)
#define all(x) x.begin(),x.end()

using namespace std;

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

using ll = int64_t;
using pii = pair<int, int>;

ll ceil(ll a, ll b) {return a % b == 0 ? a / b : a / b + 1;}
vector<pii> dir4 = {{1, 0}, {0, 1}, {-1, 0}, {0, -1}};
vector<pii> dir8 = {{1, 0}, {1, 1}, {0, 1}, {-1, 1}, {-1, 0}, {-1, -1}, {0, -1}, {1, -1}};

void solve() {
  int N, Q;
  cin>>N>>Q;
  vector<int> a(N);
  map<int, int> cnt;
  for(int i=0; i<N; i++) {
    cin>>a[i];
    cnt[a[i]]++;
  }
  set<int> next;
  int j = 0;
  for(auto [x, y]: cnt) {
    if(x != j) {
      next.emplace(j);
      j = x;
    }
    j++;
  }
  next.emplace(cnt.rbegin()->first+1);
  dbg(next);

  while(Q--) {
    int i, x;
    cin>>i>>x;
    i--;
    cnt[x]++;
    cnt[a[i]]--;
    if(cnt[x] == 1) {
      next.erase(x);
      if(cnt[x+1] == 0)
        next.emplace(x+1);
    }
    if(cnt[a[i]] == 0) {
      next.emplace(a[i]);
      if(cnt[a[i]+1] == 0)
        next.emplace(a[i]+1);
    }
    a[i] = x;
    dbg(next);
    cout<<*next.begin()<<"\n";
    a[i] = x;
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
