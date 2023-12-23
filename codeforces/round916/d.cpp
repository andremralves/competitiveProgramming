/**
 *    author: mralves 
 *    created: 19-12-2023 11:35:20       
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
  vector<pii> a(N), b(N), c(N);
  for(int i=0; i<N; i++) {
    int x; cin>>x;
    a[i] = {x, i};
  }
  for(int i=0; i<N; i++) {
    int x; cin>>x;
    b[i] = {x, i};
  }
  for(int i=0; i<N; i++) {
    int x; cin>>x;
    c[i] = {x, i};
  }
  sort(all(a)); sort(all(b)); sort(all(c));

  int ans = 0;
  for(int i=N-3; i<N; i++) {
    for(int j=N-3; j<N; j++) {
      for(int k=N-3; k<N; k++) {
        if(a[i].second != b[j].second
            and a[i].second != c[k].second
            and b[j].second != c[k].second) {
          int sum = a[i].first+b[j].first+c[k].first;
          ans = max(ans, sum);
        }
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
    cin>>t;
    while (t--) solve();
    return 0;
}
