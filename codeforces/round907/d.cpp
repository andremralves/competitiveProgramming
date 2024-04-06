/**
 *    author: mralves 
 *    created: 05-01-2024 11:14:20       
**/
#include <bits/stdc++.h>

#define pb(x) push_back(x)
#define all(x) x.begin(),x.end()

using namespace std;
using ll = long long;
using pii = pair<int, int>;

ll ceil(ll a, ll b) {return a % b == 0 ? a / b : a / b + 1;}
vector<pii> dir4 = {{1, 0}, {0, 1}, {-1, 0}, {0, -1}};
vector<pii> dir8 = {{1, 0}, {1, 1}, {0, 1}, {-1, 1}, {-1, 0}, {-1, -1}, {0, -1}, {1, -1}};

const int MOD = 1e9+7;
const ll MAXN = 1e18+1;
void solve() {
  int Q; cin>>Q;

  while(Q--) {
    ll l, r;
    cin>>l>>r;
    ll ans = 0;
    for(int i=2; i<=63; i++) {
      ll up = min(r+1, (1LL<<i));
      if(up > l) {

        int p = i-1;
        //cout<<l<<" "<<up<<" "<<i<<"\n";
        ll m = p;
        int j;
        for(j=1; j<=63 and m<=l; j++) {
          if(m > up/p) {
            m = up; j++;
            break;
          }
          m *= p;
        }
        m = min(m, up);
        //cout<<"m:"<<m<<" "<<"j:"<<j<<"\n";
        //cout<<i<<"\n";
        //cout<<m-l<<" "<<up-m<<" "<<j-1<<"\n";
        ans += (m-l)*(j-1)%MOD+(up-m)*j%MOD;
        ans %= MOD;
        //cout<<"ans: "<<ans<<"\n";
        l = up;
      }
    }
    cout<<ans<<"\n";
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
