/**
 *    author: mralves 
 *    created: 02-12-2023 09:00:47       
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
  int N, S,M,L;
  cin>>N>>S>>M>>L;


  int ans = 100000;
  auto dfs = [&](auto &&dfs, int val, int sum, int cnt) {
    sum += val; 
    if(cnt >= N) {
      ans = min(ans, sum);
      return;
    }
    dfs(dfs, S, sum, cnt+6);
    dfs(dfs, M, sum, cnt+8);
    dfs(dfs, L, sum, cnt+12);
  };
  int sum = 0, cnt = 0;
  dfs(dfs, S, sum, cnt+6);
  dfs(dfs, M, sum, cnt+8);
  dfs(dfs, L, sum, cnt+12);

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
