/**
 *    author: mralves 
 *    created: 17-11-2023 15:25:17       
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
  ll N;
  cin>>N;

  set<ll> found;
  for(ll i=2; i*i<=N; i++) {
    ll cur = i;
    while(cur <= N) {
      cur *=i;
      if(cur<=N)
        found.insert(cur);
    }
  }
  cout<<N-found.size()<<"\n";
}

int main ()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int t = 1;
    while (t--) solve();
    return 0;
}
