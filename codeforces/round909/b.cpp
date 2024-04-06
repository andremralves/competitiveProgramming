/**
 *    author: mralves 
 *    created: 17-11-2023 11:35:26       
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
  for(int i=0; i<N; i++) cin>>a[i];
  vector<int> div;
  for(int i=1; i*i<=N; i++) {
    if(N%i == 0) {
      div.push_back(i);
      if(N/i != i)
        div.push_back(N/i);
    }
  }
  ll ans = 0;
  for(auto d: div) {
    vector<ll> sums;
    int i = 0;
    while(i < N) {
      ll sum = 0;
      for(int j=i; j<i+d; j++) {
        sum += a[j];
      }
      sums.push_back(sum);
      i+=d;
    }
    ll mdiff = *max_element(all(sums)) - *min_element(all(sums));
    ans = max(ans, mdiff);
  }
  cout<<ans<<"\n";
}

int main ()
{
    //std::ios::sync_with_stdio(false);
    //std::cin.tie(nullptr);

    int t = 1;
    cin>>t;
    while (t--) solve();
    return 0;
}
