/**
 *    author: mralves 
 *    created: 05-01-2024 11:14:20       
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
  vector<int> a(N);
  for(int i=0; i<N; i++) cin>>a[i];
  vector<vector<int>> hist(31);
  for(int i=0; i<Q; i++) {
    int x; cin>>x;
    hist[x].emplace_back(i);
  }

  for(int i=0; i<N; i++) {
    int cur = -1;
    while(1) {
      int take = 0;
      int mi = Q+1;
      for(int j=30; j>=0; j--) {
        if(a[i]%(1<<j)) continue;
        auto lo = lower_bound(all(hist[j]), cur);
        int p = -1;
        if(lo != hist[j].end())
          p = *lo;
        //cout<<"p: "<<p<<"\n";
        if(p > cur) {
          if(p < mi) {
            mi = p;
            take = j;
          }
        }

      }
      if(take == 0) break;
      a[i] += (1<<(take-1));
      cur = mi;
    }
  }

  for(auto x:a) {
    cout<<x<<" ";
  }
  cout<<"\n";
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
