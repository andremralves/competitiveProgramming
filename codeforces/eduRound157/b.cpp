/**
 *    author: mralves 
 *    created: 03-11-2023 11:32:58       
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
  vector<int> a(N*2);
  for(int i=0; i<N*2; i++) {
    cin>>a[i];
  }
  sort(all(a));
  vector<pii> ps(N);
  ll ans = 0;
  ll x = 0, y = 0;
  for(int i=0; i<N; i++) {
    ps[i] = {a[i], a[i+N]};
    if(i) {
      x += abs(a[i]-a[i-1]);
      y += abs(a[N+i]-a[N+i-1]);
    }
  }
  ans = y+x;
  cout<<ans<<"\n";
  for(auto [p1, p2]: ps) {
    cout<<p1<<" "<<p2<<"\n";
  }
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
