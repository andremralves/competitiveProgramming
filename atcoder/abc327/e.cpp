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
  int N;
  cin>>N;
  vector<int> a(N);
  for(int i=0; i<N; i++) {
    cin>>a[i];
  }

  // dp[k][available ratings] = max rating
  vector<vector<double>> dp(N+1, vector<double>(N+1));
  double pp = 0;
  vector<double> ps(N+1);
  for(int i=1; i<=N; i++) {
    pp += pow(0.9, N-i);
    ps[i] = pp;
  }
  for(int k=1; k<=N; k++) {
    double base = -1200/sqrt(k);
    dp[k][0] = base;
    for(int j=1; j<=N; j++) {
      //cout<<"p "<<pp<<"\n";
      double calc = (double)a[j-1]*pow(0.9, k-j);
      cout<<pow(0.9, k-j)<<"\n";
      dp[k][j] = max(dp[k][j-1]+calc, dp[k][j-1]);
    }
    dp[k][N] /= pp;
  }
  double ans = -100000;
  cout<<"-------\n";
  for(int i=1; i<=N; i++) {
    cout<<dp[i][N]<<" ";
    cout<<ps[i]<<"\n";
    ans = max(dp[i][N]/ps[i], ans);
  }

  cout<<ans<<"\n";
}

int main ()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int t = 1;
    while (t--) solve();
    return 0;
}
