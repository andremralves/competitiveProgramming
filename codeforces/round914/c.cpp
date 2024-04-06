/**
 *    author: mralves 
 *    created: 09-12-2023 13:10:18       
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

const ll INF = 1e18+10;
void solve() {
  int N, K; cin>>N>>K;

  vector<ll> a(N);
  set<ll> st;
  ll mn = INF;
  for(int i=0; i<N; i++) {
    cin>>a[i];
    mn = min(mn, a[i]);
  }

  if(K >= 3) {
    cout<<"0\n";
    return;
  }

  vector<ll> sec;
  for(int i=0; i<N; i++) {
    for(int j=0; j<N; j++) {
      if(i == j) continue;
      sec.emplace_back(abs(a[i]-a[j]));
      mn = min(mn, abs(a[i]-a[j]));
    }
  }

  if(K == 1) {
    cout<<mn<<"\n";
  } else {
    sort(all(sec));
    for(int i=0; i<N; i++) {
      int lo = -1, hi = sec.size();
      while(hi-lo > 1) {
        ll m = lo+(hi-lo)/2;
        if(sec[m]<=a[i]) {
          lo = m;
        } else {
          hi = m;
        }
      }
      if(hi < (int)sec.size())
        mn = min(abs(sec[hi]-a[i]), mn);
      if(hi > 0)
        mn = min(abs(sec[hi-1]-a[i]), mn);
    }
    cout<<mn<<"\n";
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
