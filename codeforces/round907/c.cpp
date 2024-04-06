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
  int N; cin>>N;

  vector<int> a(N);
  for(int i=0; i<N; i++) {
    cin>>a[i];
  }
  sort(all(a));
  int l = 0, r = N;
  ll ops = 0;
  ll x = 0;
  while(l<r) {
    if(l == r-1) {
      if(a[l] == 0) break;
      if(a[l] == 1) ops++;
      else
        ops += (a[l]-x+1)/2+1;
      break;
    }
    if(x+a[l]<a[r-1]) {
      ops += a[l];
      x += a[l];
      l++;
    } else {
      ops += a[r-1]-x;
      a[l] -= a[r-1]-x;
      x = 0;
      r--; ops++;
    }
  }
  //for(auto y:a) {
  //  cout<<y<<" ";
  //}
  //cout<<"\n";
  cout<<ops<<"\n";

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
