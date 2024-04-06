/**
 *    author: mralves 
 *    created: 05-12-2023 18:27:37       
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


const int MAXN = 2005;
int dp[MAXN][MAXN];
void solve() {
  int N; cin>>N;
  vector<pii> a(N);
  for(int i=0; i<N: i++) {
    int x; cin>>x;
    a[i] = {x, i};
  }

  dp[0][0] = 0;
  for(int i=0; i<N; i++) {
    for(int j=0; j<N; j++) {
      dp[i][j] = 0;
    }
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
