/**
 *    author: mralves 
 *    created: 02-12-2023 09:00:47       
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
  int N, M, L;
  cin>>N>>M>>L;

  vector<pii> a(N), b(M);
  for(int i=0; i<N; i++) {
    int x; cin>>x;
    a[i] = {x, i+1};
  }
  for(int i=0; i<M; i++) {
    int x; cin>>x;
    b[i] = {x, i+1};
  }

  set<pii> st;
  for(int i=0; i<L; i++) {
    int x, y;
    cin>>x>>y;
    if(x > y) swap(x, y);
    st.emplace(x, y);
  }

  sort(a.rbegin(), a.rend());
  sort(b.rbegin(), b.rend());

  ll ans = 0;
  for(int i=0; i<N; i++) {
    for(int j=0; j<M; j++) {
      int x = a[i].second;
      int y = b[j].second;
      if(x>y) swap(x, y);
      if(st.count({x, y}) == 0) {
        ans = max(ans, (ll)a[i].first+(ll)b[j].first);
        if((ll)a[i].first+(ll)b[j].first <= ans) break;
      }
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
