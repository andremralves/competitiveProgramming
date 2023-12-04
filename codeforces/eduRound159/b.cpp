/**
 *    author: mralves 
 *    created: 03-12-2023 11:37:07       
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
  ll N, P, L, T;
  cin>>N>>P>>L>>T;

  int mn = 0;
  ll full2W = N/14;
  P -= full2W * (2 * T + L);
  mn += N/14;

  if(P < 0) {
    mn -= (-P)/(2*T+L);
  }

  if(P > 0 and N%14 > 0) {
    if(N - 14*(N/14) > 7) {
      P -= 2*T+L;
    } else {
      P -= T+L;
    }
    mn++;
  }
  //cout<<P<<"\n";
  //cout<<ans<<"\n";
  if(P > 0) {
    mn += (P+L-1)/L;
  } 
  cout<<max((ll)0, N-mn)<<"\n";


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
