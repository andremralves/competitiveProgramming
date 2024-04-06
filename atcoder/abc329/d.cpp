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
  int N, M;
  cin>>N>>M;
  set<pair<int, int>> st;
  map<int, int> mp;
  for(int i=1; i<=M; i++) {
    int x; cin>>x;
    if(mp.count(x) == 0) {
      mp[x] = 1;
      st.insert(pii(1, -x));
    } else {
      st.erase(pii(mp[x], -x));
      mp[x]++;
      st.insert(pii(mp[x], -x));
    }
    auto [a, b] = *(--st.end());
    cout<<-b<<"\n";
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
