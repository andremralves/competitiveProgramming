/**
 *    author: mralves 
 *    created: 08-12-2023 14:31:57       
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

const int MAXN = 1005;
int binom[MAXN][MAXN];
void solve() {
  cout<<binom[2][2]<<"\n";
  cout<<binom[10][2]<<"\n";
  cout<<binom[20][2]<<"\n";
}

int main ()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    // start from zero
    for(int i=0; i<MAXN; i++) {
      binom[i][0] = binom[i][i] = 1;
      for(int j=1; j<i; j++) {
        binom[i][j] = binom[i-1][j] + binom[i-1][j-1];
        if(i <= 11)
          cout<<binom[i][j]<<" ";
      }
      if(i <= 11)
        cout<<"\n";
    }

    int t = 1;
    while (t--) solve();
    return 0;
}
