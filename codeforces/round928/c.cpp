/**
 *    author: mralves 
 *    created: 19-02-2024 11:32:51       
**/
#include <bits/stdc++.h>

#define all(x) x.begin(),x.end()

// less is more
using namespace std;
using ll = long long;

const int MAXN = 2e5+10;
vector<int> ans(MAXN);
void pre() {
  for(int i=1; i<MAXN; i++) {
    int x = i;
    int cnt = 0;
    while(x) {
      cnt += x%10;
      x/=10;
    }
    ans[i] = ans[i-1]+cnt;
  }
}
void solve() {
  int N; cin>>N;
  cout<<ans[N]<<"\n";
}

int main () {
  std::ios::sync_with_stdio(false);
  std::cin.tie(nullptr);

  pre();

  int t = 1;
  cin>>t;
  while (t--) solve();
  return 0;
}
