/**
 *    author: mralves 
 *    created: 16-12-2023 09:00:37       
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
  vector<ll> a = {1, 11, 111, 1111, 1111, 11111, 111111, 1111111, 11111111,
    111111111, 1111111111, 11111111111, 111111111111};
  vector<ll> b;
  for(int i=0; i<(int)a.size(); i++) {
    for(int j=0; j<(int)a.size(); j++) {
      for(int k=0; k<(int)a.size(); k++) {
        b.emplace_back(a[i]+a[j]+a[k]);
      }
    }
  }

  sort(all(b));
  unique(all(b)) - b.begin();
  cout<<b[N-1]<<"\n";
}

int main ()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int t = 1;
    while (t--) solve();
    return 0;
}
