/**
 *    author: mralves 
 *    created: 07-10-2023 14:00:34       
**/
#include <bits/stdc++.h>

#define pb(x) push_back(x)
#define all(x) x.begin(),x.end()

using namespace std;
using ll = int64_t;
using ii = pair<int, int>;

ll ceil(ll a, ll b) {return a % b == 0 ? a / b : a / b + 1;}
vector<ii> dir4 = {{1, 0}, {0, 1}, {-1, 0}, {0, -1}};
vector<ii> dir8 = {{1, 0}, {1, 1}, {0, 1}, {-1, 1}, {-1, 0}, {-1, -1}, {0, -1}, {1, -1}};

map<int, vector<int>> ans;

void solve() {
  int P;
  cin>>P;
  if(ans.count(P)) {
    cout<<ans[P].size()<<" ";
    for(auto x: ans[P]) {
      cout<<x<<" ";
    }
    cout<<"\n";
  } else {
    cout<<"-1\n";
  }
}

int main() {
  std::ios::sync_with_stdio(false);
  std::cin.tie(nullptr);
  int t;
  cin>>t;

  vector<int> a;
  auto dfs = [&](auto self, int res, int last, int p) -> void {
    if(res == 0) {
      if(ans.count(p) == 0 || a.size() < ans[p].size()) {
        ans[p] = a;
      }
    }
    for(int i=last; i<=res; i++) {
      a.push_back(i);
      self(self, res-i, i, p*i);
      a.pop_back();
    }
  };
  dfs(dfs, 41, 1, 1);

  for(int i=1; i<=t; i++) {
    cout<<"Case #"<<i<<": ";
    solve();
  }
  return 0;
}


