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
  ll N;
  cin>>N;

  vector<ll> divs;
  divs.push_back(1);
  for(ll i=2; i*i<=N; i++) {
    if(N%i == 0) {
      divs.push_back(i);
      if(i != N/i)
        divs.push_back(N/i);
    }
  }
  if(N != 1)
    divs.push_back(N);
  sort(all(divs));
  for(auto x:divs) {
    cout<<x<<"\n";
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
