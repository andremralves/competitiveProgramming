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

bool checkEq(deque<int> &a, deque<int> &b, ll asum, ll bsum) {
  if(asum != bsum) return false;
  int n = a.size();
  int l = 0, r = a.size()-1;
  while(l<(int)a.size()) {
    if(a[l] != b[r]) return false;
    if(l < n/2) {
      if(a[l] >= b[l]) return false;
      if(a[r] <= b[r]) return false;
    }
    l++, r--;
  }
  return true;
}

void solve() {
  int n;
  cin>>n;
  deque<int> a, b;
  for(int i=0; i<n; i++) {
    int x;
    cin>>x;
    a.push_back(x);
  }
  for(int i=0; i<n; i++) {
    int x;
    cin>>x;
    b.push_back(x);
  }
  ll asum = accumulate(a.begin(), a.end(), 0ll);
  ll bsum = accumulate(b.begin(), b.end(), 0ll);
  for(int i=0; i<100*n+2; i++) {
    //dbg(asum, bsum);
    if(checkEq(a, b, asum, bsum)) {
      cout<<i<<"\n";
      return;
    }
    asum += b.front() - a.front();
    bsum += a.front() - b.front();
    a.push_back(b.front());
    b.push_back(a.front());
    a.pop_front();
    b.pop_front();
    //dbg(a, b);
  }
  cout<<"-1\n";
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


