/**
 *    author: mralves 
 *    created: 04-11-2023 08:56:08       
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
  vector<int> a(M), b(M);
  for(int i=0; i<M; i++) {
    cin>>a[i];
    a[i]--;
  }
  for(int i=0; i<M; i++) {
    cin>>b[i];
    b[i]--;
  }

  vector<vector<int>> g(N);
  for(int i=0; i<M; i++) {
    g[a[i]].push_back(b[i]);
    g[b[i]].push_back(a[i]);
  }

  vector<char> used(N);
  bool valid = true;
  auto dfs = [&](auto &&self, int i, int prev) {
    if(used[i]) {
      if(used[i] == used[prev]) {
        valid = false;
      }
      return;
    } else {
      if(prev == -1)
        used[i] = 1;
      else
        used[i] = 3-used[prev];
    }
    for(auto j: g[i])
      self(self, j, i);
  };


  for(int i=0; i<N; i++) {
    if(!used[i]) {
      //cout<<"i:"<<i<<"\n";
      dfs(dfs, i, -1);
    }
  }
  //for(int x: used) {
  //  cout<<x<<" ";
  //}
  //cout<<"\n";
  cout<<(valid ? "Yes\n" : "No\n");
}

int main ()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int t = 1;
    while (t--) solve();
    return 0;
}
