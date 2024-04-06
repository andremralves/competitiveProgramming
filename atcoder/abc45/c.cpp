#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int main() {
  string s;
  cin>>s;

  auto dfs = [&](auto &&self, int i, ll cur, ll sum) -> ll {
    if(i == (int)s.size()) {
      return sum+cur;
    }
    int x = s[i]-'0';
    ll ans = 0;
    ans += self(self, i+1, x, sum+cur);
    if(i > 0)
      ans += self(self, i+1, cur*10+x, sum);
    return ans;
  };
  cout<<dfs(dfs, 0, 0, 0)<<"\n";
  return 0;
}
