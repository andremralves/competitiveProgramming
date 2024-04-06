/**
 *    author: mralves 
 *    created: 07-11-2023 17:57:55       
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
  vector<ll> a(N);
  for(int i =0; i<N; i++) {
    cin>>a[i];
  }

  sort(all(a));

  vector<ll> dp(N);
  dp[0] = 0;
  for(ll i=1; i<N; i++) {
    dp[i] = dp[i-1]+(a[i]-a[i-1])*i;
  }
  cout<<accumulate(all(dp), 0ll)<<"\n";

}

int main ()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int t = 1;
    while (t--) solve();
    return 0;
}
