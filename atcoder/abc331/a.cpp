/**
 *    author: mralves 
 *    created: 02-12-2023 09:00:47       
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
  int M, D;
  cin>>M>>D;
  int y, m, d;
  cin>>y>>m>>d;
  if(d+1 < D) d++;
  else {
    d = 1;
    if(m+1 < M) m++;
    else {
      m = 1;
      if(m == 1) y++;
    }
  }
  cout<<y<<" "<<m<<" "<<d<<"\n";

}

int main ()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int t = 1;
    while (t--) solve();
    return 0;
}
