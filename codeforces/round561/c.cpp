/**
 *    author: mralves 
 *    created: 12-11-2023 22:46:57       
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

  vector<int> a(N);
  for(int i=0; i<N; i++) {
    cin>>a[i];
    if(a[i] < 0) a[i] *= -1;
  }
  sort(all(a));
  ll ans = 0;
  for(int i=0; i<N; i++) {
    int r = upper_bound(all(a), a[i]*2) - a.begin();
    ans += r-i-1;
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
