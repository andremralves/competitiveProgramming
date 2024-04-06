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
  ll X, Y, A, B;
  cin>>X>>Y>>A>>B;

  ll l = X, r = Y;
  ll max = 0;
  while(r-l > 1) {
    //cout<<l<<" "<<r<<" ";
    ll m = midpoint(r, l);
    //cout<<m<<"\n";
    ll left = 0;
    ll val = X;
    while(val<=m/A) {
      val*=A;
      left++;
    }
    //cout<<val<<"\n";
    ll rigth = (Y-val-1)/B;
    //cout<<left<<" "<<rigth<<"\n";
    if(left+rigth >= max) {
      max = left+rigth;
      r = m;
    } else {
      l = m;
    }
  }
  cout<<max<<"\n";
}

int main ()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int t = 1;
    while (t--) solve();
    return 0;
}
