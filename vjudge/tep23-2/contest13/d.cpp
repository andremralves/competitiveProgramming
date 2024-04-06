/**
 *    author: mralves 
 *    created: 01-12-2023 15:45:19       
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
  sort(a.rbegin(), a.rend());
  map<int, int> mp;
  mp[a[0]]++;
  ll ans = 0;
  for(int i=1; i<N; i++) {
    auto it = mp.rbegin();
    ans += it->first;
    int keep = it->first;
    if(it->first > a[i])
      it->second--;
    if(it->second == 0) {
      mp.erase(it->first);
    }
    if(a[i] < keep)
      mp[a[i]]+=2;
    else
      mp[a[i]]++;
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
