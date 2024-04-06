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
  int n, m, K, H;
  cin>>n>>m>>K>>H;
  vector<int> a(n);
  for(int i=0; i<n; i++) {
    cin>>a[i];
  }

  int ans = 0;
  for(int k=0; k<n; k++) {
    bool can = 0;
    for(int i=1; i<=m; i++) {
      for(int j=1; j<=m; j++) {
        if(i == j) continue;
        if(a[k]+i*K == H+j*K) can = 1; 
      }
    }
    if(can) ans++;
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
