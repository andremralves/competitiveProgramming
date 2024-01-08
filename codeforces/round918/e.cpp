/**
 *    author: mralves 
 *    created: 28-12-2023 11:35:40       
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
  vector<int> a(N);
  for(int i=0; i<N; i++) {
    cin>>a[i];
  }
  vector<ll> psum(N+1);
  map<ll, int> mp;
  for(int i=1; i<=N; i++) {
    psum[i] = psum[i-1];
    if(i%2) psum[i] += a[i-1];
    else psum[i] -= a[i-1];
    mp[psum[i]] = i;
  }

  bool found = false;
  for(int i=0; i<=N; i++) {
    ll find = psum[i];
    if(mp.count(find) and mp[find] > i) {
      found = true;
      break;
    }
  }
  cout<<(found?"YES":"NO")<<"\n";
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
