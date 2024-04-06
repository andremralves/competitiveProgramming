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
  int N, K;
  cin>>N>>K;

  vector<int> a(N);
  for(int i=0; i<N; i++) {
    cin>>a[i];
  }

  if(K != 4) {
    int ans = 10;
    for(int i=0; i<N; i++) {
      if(a[i]%K == 0)
        ans = 0;
      else
        ans = min(ans, K-a[i]%K);
    }
    cout<<ans<<"\n";
  } else {
    int ans = 10;
    int K2 = 2;
    vector<int> mods;
    for(int i=0; i<N; i++) {
      if(a[i]%K2 == 0) {
        mods.push_back(0);
      }
      else
        mods.push_back(K2-a[i]%K2);
    }
    for(int i=0; i<N; i++) {
      if(a[i]%K == 0)
        ans = 0;
      else
        ans = min(ans, K-a[i]%K);
    }
    sort(all(mods));
    cout<<min(ans, mods[0]+mods[1])<<"\n";
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
