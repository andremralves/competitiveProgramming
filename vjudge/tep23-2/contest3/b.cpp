/**
 *    author: mralves 
 *    created: 06-10-2023 16:14:29       
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

void solve() {
  int n;
  cin>>n;
  vector<ll> a(n);
  ll ans = 1;
  bool ok = true;
  for(int i=0; i<n; i++) {
    cin>>a[i];
  }
  if(count(all(a), 0) > 0) {
    cout<<"0\n";
    return;
  }
  for(int i=0; i<n; i++) {
    if(ans > ((ll)1e18)/a[i]) {
      ok = false;
    }
    ans *= a[i];
  }
  if(ok) {
    cout<<ans<<"\n";
  } else {
    cout<<-1<<"\n";
  }
}

int main ()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int t = 1;
    while (t--) solve();
    return 0;
}
