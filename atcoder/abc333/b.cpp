/**
 *    author: mralves 
 *    created: 16-12-2023 09:00:37       
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
  string s, t;
  cin>>s>>t;
  int x = abs(s[0]-s[1]);
  int y = abs(t[0]-t[1]);
  if(x == 4) x = 1;
  if(y == 4) y = 1;
  if((x == 1 and y == 1) or x (!=1 and y != 1)) {
    cout<<"Yes\n";
  } else {
    cout<<"No\n";
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
