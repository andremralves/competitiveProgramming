/**
 *    author: mralves 
 *    created: 11-11-2023 08:58:27       
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

void solve() {
  string s;
  cin>>s;
  int p = 0;
  while(true) {
    int pos = s.find("ABC", p);
    int N = s.size();
    if(pos == (int)string::npos) break;
    int l = pos, r = pos + 2;
    bool found = true;
    while(found) {
      found = false;
      while(true) {
        if(l-1 < 0 or r+2 >= N) break;
        if(s.substr(l-1, 1) != "A"
            or s.substr(r+1, 2) != "BC") break;
        l = l-1, r = r+2;
        found = true;
      }
      while(true) {
        if(l-2 < 0 or r+1 >= N) break;
        if(s.substr(l-2, 2) != "AB"
            or s.substr(r+1, 1) != "C") break;
        l = l-2, r = r+1;
        found = true;
      }
    }
    s = s.substr(0, l)+s.substr(r+1);
    p = l;
  }
  cout<<s<<"\n";
}

int main ()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int t = 1;
    while (t--) solve();
    return 0;
}
