/**
 *    author: mralves 
 *    created: 19-12-2023 11:35:20       
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

bool check(vector<int> a, vector<int>b) {
  for(int i=0; i<(int)a.size(); i++) {
    if(a[i] > 0 and b[i] > 0) return true;
  }
  return false;
}

void solve() {
  int N; cin>>N;
  vector<int> a(N), b(N);
  for(int i=0; i<N; i++) {
    cin>>a[i];
  }
  for(int i=0; i<N; i++) {
    cin>>b[i];
  }


  bool is_a = true;
  dbg(a, b);
  while(check(a, b)) {
    int best = -1;
    int x;
    if(is_a) {
      for(int i=0; i<N; i++) {
        if(a[i]>0 and b[i]>0) {
          int sum = a[i]+b[i]-1;
          if(sum >= best) {
            best=sum;
            x = i;
          }
        }
      }
      a[x]--; b[x] = 0;
    } else {
      for(int i=0; i<N; i++) {
        if(a[i]>0 and b[i]>0) {
          int sum = a[i]+b[i]-1;
          if(sum>best) {
            best=sum;
            x = i;
          } 
        }
      }
      b[x]--; a[x]=0;
    }
    //dbg(a, b);
    //cout<<"best:"<<best<<"\n";
    is_a ^= 1;
  }
  cout<<accumulate(all(a), 0ll)-accumulate(all(b), 0ll)<<"\n";
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
