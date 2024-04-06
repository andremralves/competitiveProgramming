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

deque<char> getDeck() {
  deque<char> deck;
  string line;
  getline(cin, line);
  stringstream ss(line);
  char c;
  while(ss>>c) {
    deck.push_back(c);
  }
  return deck;
}

string val = "23456789TJQKA";
void solve() {
  deque<char> deck1, deck2;
  deck1 = getDeck();
  deck2 = getDeck();

  int cnt = 0;
  bool draw = false;
  while(!deck1.empty() and !deck2.empty()) {
    if(cnt == (int)1e4) {
      draw = true;
      break;
    }
    int v1 = val.find(deck1.front());
    int v2 = val.find(deck2.front());
    if(v1 < v2) {
      deck2.push_back(deck1.front());
      deck1.pop_front();
      deck2.pop_front();
    } else if(v1 > v2) {
      deck1.push_back(deck2.front());
      deck1.pop_front();
      deck2.pop_front();
    } else {
      deck1.push_back(deck1.front());
      deck1.pop_front();
      deck2.push_back(deck2.front());
      deck2.pop_front();
    }
    cnt++;
  }

  if(draw) {
    cout<<"draw\n";
  } else if(deck1.empty()) {
    cout<<"player 2\n";
  } else {
    cout<<"player 1\n";
  }
}

int main ()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int t = 1;
    cin>>t;
    string emp;
    getline(cin, emp);
    while (t--) solve();
    return 0;
}
