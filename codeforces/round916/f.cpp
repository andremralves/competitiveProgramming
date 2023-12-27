/**
 *    author: mralves 
 *    created: 19-12-2023 11:35:20       
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
  vector<vector<int>> G(N);
  for(int i=1; i<=N-1; i++) {
    int p; cin>>p;
    G[i].emplace_back(p-1);
    G[p-1].emplace_back(i);
  }

  vector<int> que;
  que.emplace_back(0);
  vector<int> d(N);
  d[0] = 0;
  vector<int> used(N);
  used[0] = 1;
  for(int i=0; i<(int)que.size(); i++) {
    int u = que[i];
    for(auto v: G[u]) {
      if(!used[v]) {
        used[v] = 1;
        d[v] = d[u]+1;
        que.push_back(v);
      }
    }
  }
  int mxd = *max_element(all(d));
  vector<int> hist(mxd+1);
  for(int i=0; i<N; i++) {
    hist[d[i]]++;
  }

  int ans = 0, unused = 0;
  for(int i=mxd; i>=1; i--) {
    int x = min(unused, hist[i]-1);
    ans += x;
    unused -= x;
    hist[i] -= x;
    ans += hist[i]/2;
    unused += hist[i]%2;
  }
  cout<<ans<<"\n";
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


