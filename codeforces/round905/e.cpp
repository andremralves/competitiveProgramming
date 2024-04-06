/**
 *    author: mralves 
 *    created: 25-10-2023 03:12:39       
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

  vector<int> a(N);
  for(int i=0; i<N; i++) {
    cin>>a[i];
  }

  vector<int> p2(N);
  ll p = 0, ans = 0;
  for(int i=1; i<N; i++) {
    ll cur = a[i];
    int cnt = 0;
    while(cur < a[i-1]) {
      cur *= 2;
      cnt++;
    }
    while(p and a[i-1]*2 <= cur) {
      a[i-1] *= 2;
      p--;
    }
    p = p + cnt;
    ans += p;
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
