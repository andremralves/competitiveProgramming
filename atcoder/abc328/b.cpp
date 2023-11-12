/**
 *    author: mralves 
 *    created: 11-11-2023 08:58:27       
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
  int N;
  cin>>N;
  vector<int> d(N);
  ll ans = 0;
  for(int i=1; i<=N; i++) {
    int x; cin>>x;
    for(int j=1; j<=x; j++) {
      string s = to_string(i)+to_string(j);
      bool eq = true;
      for(int k=1; k<(int)s.size(); k++) {
        if(s[k] != s[k-1]) eq = false;
      }
      if(eq) ans++;
    }
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
