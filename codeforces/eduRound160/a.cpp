/**
 *    author: mralves 
 *    created: 18-12-2023 11:36:20       
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
  string s; cin>>s;

  bool ok = false;
  for(int i=1; i<(int)s.size(); i++) {
    string s1 = s.substr(0, i);
    string s2 = s.substr(i);
    int x = atoi(s1.c_str());
    int y = atoi(s2.c_str());
    if(s1[0] != '0' and s2[0] != '0' and y > x) {
      cout<<x<<" "<<y<<"\n";
      ok = true;
      break;
    }
  }
  if(!ok) {
    cout<<"-1\n";
  }
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
