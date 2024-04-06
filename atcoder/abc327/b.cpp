/**
 *    author: mralves 
 *    created: 04-11-2023 08:56:08       
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
  ll B;
  cin>>B;
  if(B == 1){
    cout<<B<<"\n";
    return;
  }
  for(ll i = 2; i<=18; i++) {
    ll cur = i;
    for(int j=0; j<i-1; j++) {
      cur*=i;
    }
    if(cur == B) {
      cout<<i<<"\n";
      return;
    }
  }
  cout<<"-1\n";
}

int main ()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int t = 1;
    while (t--) solve();
    return 0;
}
