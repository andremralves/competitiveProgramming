/**
 *    author: mralves 
 *    created: 05-12-2023 11:44:56       
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

  vector<pii> ps(N);
  for(int i=0; i<N; i++) {
    int l, r;
    cin>>l>>r;
    ps[i] = {l, r};
  }

  int lo = -1, hi = 1e9+1;
  while(hi-lo > 1) {
    int k = lo+(hi-lo)/2;
    //cout<<"K:"<<k<<"\n";
    int ok = true;
    int l = 0, r = 0;
    for(int i=0; i<N; i++) {
      l -= k, r += k;
      auto [p1, p2] = ps[i];
      if(r < p1 or l > p2) {
        ok = false;
        break;
      }

      l = max(l, p1);
      r = min(r, p2);
    }
    if(ok) {
      hi = k;
    } else {
      lo = k;
    }
  }
  cout<<hi<<"\n";
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
