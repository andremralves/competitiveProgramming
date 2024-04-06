/**
 *    author: mralves 
 *    created: 14-11-2023 18:01:41       
**/
#include <bits/stdc++.h>

#define pb(x) push_back(x)
#define all(x) x.begin(),x.end()

using namespace std;
using ll = int64_t;
using pii = pair<int, int>;
using pll = pair<ll, ll>;

ll ceil(ll a, ll b) {return a % b == 0 ? a / b : a / b + 1;}
vector<pii> dir4 = {{1, 0}, {0, 1}, {-1, 0}, {0, -1}};
vector<pii> dir8 = {{1, 0}, {1, 1}, {0, 1}, {-1, 1}, {-1, 0}, {-1, -1}, {0, -1}, {1, -1}};

void solve() {
  int N;
  cin>>N;
  vector<pll> ps(N);
  ll A = 0, B = 0;
  for(int i=0; i<N; i++) {
    int x, y;
    cin>>x>>y;
    ps[i] = {x, y};
    A += x;
  }

  sort(all(ps), [](const pll &a, const pll &b) {
      return (2*a.first+a.second)>(2*b.first+b.second);
      });

  ll ans = 0;
  for(int i=0; i<N; i++) {
    auto [a, b] = ps[i];
    B += a+b; 
    A -= a;
    ans++;
    if(B > A) {
      break;
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
