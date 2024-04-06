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
  int N;
  cin>>N;
  map<int, int> mp;
  vector<pii> a(N);
  map<int, int> pot, monst;
  for(int i = 0; i<N; i++) {
    int t, x;
    cin>>t>>x;
    a[i] = {t, x};
    if(t == 2)
      monst[x]++;
    else
      pot[x]++;
  }

  for(int i=0; i<N; i++) {
    auto [t, x] = a[i];
    if(pot[x] < monst[x]) {
      ok = false;
    } else {

    }
  }

  map<int, int> cur, pot;
  vector<int> ops;
  int cnt = 0;
  bool ok = true;
  int ans = 0;
  for(int i=0; i<N; i++) {
    auto [t, x] = a[i];
    if(t == 2) {
      ans = max(cnt, ans);
      //cout<<"cnt: "<<cnt<<" "<<ans<<"\n";
      //cout<<"t2: "<<pot[x]<<" "<<cur[x]<<"\n";
      if(pot[x] == 0) ok = false;
      cur[x]++;
      pot[x]--;
      cnt--;
    }
    else {
      if(pot[x] >= mp[x]-cur[x])
        ops.emplace_back(0);
      else {
        pot[x]++;
        ops.emplace_back(1);
        cnt++;
      }
    }
  }
  ans = max(cnt, ans);
  if(!ok) {
    cout<<"-1\n";
  } else {
    cout<<ans<<"\n";
    for(auto x:ops) {
      cout<<x<<" ";
    }
    cout<<"\n";
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
