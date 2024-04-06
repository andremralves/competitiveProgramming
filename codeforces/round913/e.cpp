/**
 *    author: mralves 
 *    created: 05-12-2023 11:44:56       
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

const int MAXB = 21;
int binom[MAXB][MAXB];
void solve() {
  int N; cin>>N;
  ll ans = 1;
  while(N) {
    ans *= binom[N%10+2][2];
    N/=10;
  }
  cout<<ans<<"\n";
}

int main ()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    for(int i=1; i<MAXB; i++) {
      binom[i][0] = binom[i][i] = 1;
      for(int j=1; j<i; j++) {
        binom[i][j] = binom[i-1][j] + binom[i-1][j-1];
      }
    }

    int t = 1;
    cin>>t;
    while (t--) solve();
    return 0;
}
