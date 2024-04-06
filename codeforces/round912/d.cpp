/**
 *    author: mralves 
 *    created: 30-11-2023 13:33:01       
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
  int N, Q;
  cin>>N>>Q;

  vector<ll> a(N);
  for(int i=0; i<N; i++) {
    cin>>a[i];
  }

  //cout<<(1ll<<62)<<"\n";
  while(Q--) {
    ll k; cin>>k;
    ll ans = 0;
    vector<ll> b = a;
    for(int i=62; i>=0; i--) {
      ll mask = 1ll<<i;
      ll cnt = 0;
      for(int j=0; j<N; j++) {
        //cout<<"a[j]: "<<b[j]<<" "<<(mask&b[j])<<" "<<mask<<"\n";
        if(!(mask & b[j])) {
          if(cnt > k-(mask-((mask-1)&b[j]))) {
            cnt = LLONG_MAX;
            break;
          }
          cnt += mask-((mask-1)&b[j]);
        }
      }
      if(cnt <= k) {
        k-=cnt;
        ans += mask;
        for(int j=0; j<N; j++) {
          if(!(mask & b[j]))
            b[j] = mask;
        }
      }
    }
    cout<<ans<<"\n";
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
