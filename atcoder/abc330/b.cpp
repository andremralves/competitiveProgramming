/**
 *    author: mralves 
 *    created: 25-11-2023 09:00:50       
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
  int N, L, R;
  cin>>N>>L>>R;

  vector<int> a(N);
  for(int i=0; i<N; i++) {
    cin>>a[i];
  }

  for(int i=0; i<N; i++) {
    if(a[i]>=L and a[i]<=R) {
      cout<<a[i]<<" ";
    } else {
      if(abs(a[i]-L) < abs(a[i]-R)) {
        cout<<L<<" ";
      } else {
        cout<<R<<" ";
      }
    }
  }
  cout<<"\n";
}

int main ()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int t = 1;
    while (t--) solve();
    return 0;
}
