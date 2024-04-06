/**
 *    author: mralves 
 *    created: 24-11-2023 14:56:02       
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
  ll N, K;
  cin>>N>>K;
  vector<int> a(N);
  vector<int> pos, neg, zeros;
  for(int i=0; i<N; i++) {
    cin>>a[i];
    if(a[i] > 0)
      pos.push_back(a[i]);
    else if(a[i] < 0)
      neg.push_back(a[i]);
    else
      zeros.push_back(a[i]);
  }
  sort(all(neg));
  sort(all(pos));

  ll l = -1e18, r = 1e18;
  while(r-l > 1) {
    ll m = midpoint(r, l);

    ll cnt = 0;
    for(int i=0; i<N; i++) {
      if(m >= 0) {
        if(a[i]<0) {
          cnt += neg.size();   
        } else if(a[i]>0) {
        } else {
        }
        cnt += neg.size()-1;
      }
      if(a[i] < 0) {
        neg.push_back(a[i]);
      }
    }
  }
  cout<<ans<<"\n";
}

// -2 -4 3 3 
// 8
// -6
// -6
// -12
// -12
// 9
//
// -12
// -12
// -6
// -6
// 8
// 9

int main ()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int t = 1;
    while (t--) solve();
    return 0;
}
