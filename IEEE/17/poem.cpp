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

char nextChar(char cur) {
  if(cur == 'X') cur++;
  int x = cur-'A';
  x++; x%=26;
  return x+'A';
}

void solve() {
  int n, m;
  cin>>n>>m;
  string line, emp;
  getline(cin, emp);
  vector<set<string>> dict(n);
  for(int i=0; i<n; i++) {
    getline(cin, line);
    stringstream ss(line);
    string word;
    while(ss>>word) {
      dict[i].insert(word);
    }
  }
  getline(cin, emp);
  map<int, char> mp;
  string ans = "";
  char curChar = 'A';
  for(int i=0; i<m; i++) {
    getline(cin, line);
    stringstream ss(line);
    string word;
    while(ss>>word);
    for(auto &c: word) {
      c = tolower(c);
    }
    bool found = false;
    int keep = 0;
    for(int j=0; j<n; j++) {
      if(dict[j].count(word)) {
        found = true;
        keep = j;
        break;
      }
    }
    if(found) {
      if(mp.count(keep) == 0) {
        mp[keep] = curChar;
        curChar = nextChar(curChar);
      }
      ans+=mp[keep]; 
    } else {
      ans+='X';
    }
  }
  for(char c='A'; c<='Z'; c++) {
    int cnt = count(all(ans), c);
    if(cnt == 1) {
      ans[ans.find(c)] = 'X';
    }
  }

  curChar = 'A';
  map<char, char> newChar;
  for(char &c: ans) {
    if(c == 'X') continue;
    if(newChar.count(c) == 0) {
      newChar[c] = curChar;
      curChar = nextChar(curChar);
    } 
    c = newChar[c];
  }

  cout<<ans<<"\n";
}

int main ()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int t = 1;
    while (t--) solve();
    return 0;
}
