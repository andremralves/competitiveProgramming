/**
 *    author: mralves 
 *    created: 03-11-2023 15:52:59       
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

  ll m=0, e=0, c=0;
  for(int i=0; i<N; i++) {
    ll x; cin>>x;
    if(x < 0)
      x*=-1;
    m+=x;
    e+=x*x;
    c = max(c, x);
  }
  cout<<m<<"\n";
  cout<<sqrt(e)<<"\n";
  cout<<c<<"\n";

}

int main ()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    cout<<setprecision(10);
    cout<<fixed;

    int t = 1;
    while (t--) solve();
    return 0;
}
