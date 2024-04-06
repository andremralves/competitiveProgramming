/**
 *    author: mralves 
 *    created: 17-11-2023 15:25:17       
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
  int K; cin>>K;
  string S, T;
  cin>>S>>T;

  vector<int> taka(10), aoki(10);
  for(int i=0; i<4; i++) {
    taka[S[i]-'0']++;
  }
  for(int i=0; i<4; i++) {
    aoki[T[i]-'0']++;
  }

  double t_wins = 0, a_wins = 0;
  for(int i=1; i<=9; i++) {
    for(int j=1; j<=9; j++) {
      ll icnt = K-taka[i]-aoki[i];
      ll jcnt = K-taka[j]-aoki[j];
      if(icnt == 0 or jcnt == 0) {
        continue;
      }
      taka[i]++; aoki[j]++;

      ll t = 0, a = 0;
      for(int k=1; k<=9; k++) {
        t += k*pow(10,taka[k]);
      }
      for(int k=1; k<=9; k++) {
        a += k*pow(10,aoki[k]);
      }

      ll cnt = icnt*jcnt;
      if(i == j)
        cnt = icnt*(jcnt-1);
      if(t > a) {
        t_wins+=cnt;
      } else {
        a_wins+=cnt;
      }
      taka[i]--; aoki[j]--;
    }
  }
  cout<<t_wins/(t_wins+a_wins)<<"\n";
}

int main ()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    cout<<setprecision(15)<<fixed;

    int t = 1;
    while (t--) solve();
    return 0;
}
