/**
 *    author: mralves 
 *    created: 18-11-2023 08:59:15       
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
  int N; cin>>N;
  string s; cin>>s;
  string tmp;
  map<char, int> mp;
  for(int i=0; i<N; i++) {
    if(i>0 and s[i] != s[i-1]) {
      tmp = "";
    }
    tmp += s[i];
    mp[s[i]] = max(mp[s[i]], (int)tmp.size());
  }
  ll ans = 0;
  for(auto [a, b]:mp) {
    ans += b;
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
