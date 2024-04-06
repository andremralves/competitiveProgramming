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

pair<string, string> findInDict(string dict, string l, string r) {
  dbg(l, r);
  if(l.size() < 3 or r.size() < 3) return {"", ""};
  int pl = dict.find(l);
  int pr = dict.find(r);
  if(pl != (int)string::npos and pr != (int)string::npos) {
    if(dict.find(l, pl+1) != string::npos or dict.find(r, pr+1) != string::npos) {
      return {"-ambiguous-", ""};
    }
    string w1, w2;
    //cout<<pl<<" "<<pr<<"\n";
    while(dict[pl] != ',') {
      w1 += dict[pl];
      pl++;
    }
    w2 = r;
    pr--;
    while(dict[pr] != ',') {
      w2 = dict[pr] + w2;
      pr--;
    }
    return {w1, w2};
  } else {
    return {"", ""};
  }
}

void solve() {
  int N, M;
  cin>>N>>M;

  string dict = ",";
  for(int i=0; i<N; i++) {
    string s;
    cin>>s;
    dict += s + ",";
  }

  for(int i=0; i<M; i++) {
    string s;
    cin>>s;
    int cnt = 0;
    set<string> a1, a2;
    for(int j=0; j<(int)s.size(); j++) {
      string l = s.substr(0, j);
      string r = s.substr(j);
      pair<string, string> ps, ps1, ps2, ps3, ps4;
      ps = findInDict(dict, l, r);
      //ps1 = findInDict(dict, l+l.back(), r);
      //ps2 = findInDict(dict, l, r.front()+r);
      ps3 = findInDict(dict, l, l.back()+r);
      ps4 = findInDict(dict, l+r.front(), r);
      dbg(ps, ps1, ps2);
      if(ps.first != "") {
        a1.insert(ps.first);
        a2.insert(ps.second);
      }
      if(ps1.first != "") {
        a1.insert(ps1.first);
        a2.insert(ps1.second);
      }
      if(ps2.first != "") {
        a1.insert(ps2.first);
        a2.insert(ps2.second);
      }
      if(ps3.first != "") {
        a1.insert(ps3.first);
        a2.insert(ps3.second);
      }
      if(ps4.first != "") {
        a1.insert(ps4.first);
        a2.insert(ps4.second);
      }
    }

    dbg(a1, a2);
    if(a1.size() == 0) {
      cout<<"none\n";
    } else if(a1.count("-ambiguous-") > 0) {
      cout<<"ambiguous\n";
    } else {
      cout<<*a1.begin()<<" "<<*a2.begin()<<"\n";
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
