/**
 *    author: mralves 
 *    created: 18-12-2023 11:36:20       
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
  int N; cin>>N;
  vector<int> pot(30);
  while(N--) {
    ll t, x;
    cin>>t>>x;
    if(t == 1) {
      pot[x]++;
    } else {
      ll p;
      p = 0;
      ll mask = 1;
      while(mask<<1 <= x) {
        mask <<= 1;
        p++;
      }
      ll sum = 0;
      while(mask) {
        if(pot[p] > 0) {
          int diff = x-sum;
          sum += min((int)(diff/mask), pot[p])*mask;
        }
        //cout<<sum<<"\n";
        //cout<<"p:"<<p<<"\n";
        //cout<<"mask:"<<mask<<"\n";
        mask >>= 1;
        p--;
      }
      if(sum == x) {
        cout<<"YES\n";
      } else {
        cout<<"NO\n";
      }
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
