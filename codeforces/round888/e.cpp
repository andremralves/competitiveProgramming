/**
 *    author: mralves 
 *    created: 02-01-2024 15:06:48       
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
  int N, K;
  cin>>N>>K;
  vector<int> c(N);
  for(int i=0; i<N; i++) {
    cin>>c[i];
  }

  vector<int> p(K);
  for(int i=0; i<K; i++) {
    cin>>p[i];
    p[i]--; c[p[i]] = 0;
  }
  map<int, vector<int>> mp;
  for(int i=0; i<N; i++) {
    int x; cin>>x;
    while(x--) {
      int y; cin>>y;
      mp[i].emplace_back(--y);
    }
  }

  vector<int> used(N);
  auto dfs = [&](auto &&self, int i) -> ll {
    ll val = 0;
    if(used[i]) return c[i];
    used[i] = 1;
    if(mp[i].size() == 0) return c[i];
    for(auto x:mp[i]) {
      val += self(self, x);
    }
    c[i] = min((ll)c[i], val);
    return c[i];
  };

  for(int i=0; i<N; i++) {
    dfs(dfs, i);
  }

  for(int i=0; i<N; i++) {
    cout<<c[i]<<" ";
  }
  cout<<"\n";
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
