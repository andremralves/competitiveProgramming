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

bool checkBad(vector<set<string>> seq, int N, string old, string new_s) {
  //cout<<"CHECK\n";
  for(int len = 1; len<=10; len++) {
    for(int i=0; i<(int)old.size()-len+1; i++) {
      if(i > (int)new_s.size()) continue;
      string pre = old.substr(0, i);
      string key = old.substr(i, len);
      string suf = old.substr(i+len);

      string pre2 = new_s.substr(0, i);
      string key2 = new_s.substr(i, new_s.size()-suf.size()-pre.size());
      string suf2 = new_s.substr(i+key2.size());

      if(pre != pre2 or suf != suf2) continue;
      for(auto sq: seq) {
        if(sq.count(key) and sq.count(key2)) {
          return true; 
        }
      }

    }
  }
  //for(int i=0; i<N; i++) {
  //  for(auto key: seq[i]) {
  //    size_t pos = 0;
  //    while((pos = old.find(key, pos)) != string::npos) {
  //      //cout<<pos<<"\n";
  //      string pre = old.substr(0, pos);
  //      string suf = old.substr(pos+key.size());

  //      if(pos > new_s.size()) break;
  //      if(new_s.substr(0, pos) != pre) {
  //        pos++;
  //        continue;
  //      }
  //      string key2 = new_s.substr(pos, new_s.size()-suf.size()-pre.size());
  //      if(new_s.substr(pos+key2.size()) != suf) {
  //        pos++;
  //        continue;
  //      }
  //      if(seq[i].count(key2))
  //        return true;
  //      pos = pos+1;
  //    }
  //  }
  //}
  return false;
}

void solve() {
  int N;
  cin>>N;

  vector<set<string>> seq(N);
  for(int i=0; i<N; i++) {
    int M;
    cin>>M;
    for(int j=0; j<M; j++) {
      string w;
      cin>>w;
      seq[i].insert(w);
    }
  }
  int P; cin>>P;
  while(P--) {
    string old, new_s;
    cin>>old>>new_s;
    dbg(old, new_s);
    bool bad = checkBad(seq, N, old, new_s);
    if(bad) {
      cout<<"REJECT\n";
    } else {
      cout<<"OK\n";
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
