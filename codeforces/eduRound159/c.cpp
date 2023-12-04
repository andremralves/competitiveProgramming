/**
 *    author: mralves 
 *    created: 03-12-2023 11:37:07       
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

int N;
bool check(vector<ll> a, ll x) {
  for(int i=1; i<N; i++) {
    if((a[i]-a[i-1])%x) {
      return false;
    }
  }
  return true;
}

void solve() {
  cin>>N;

  vector<ll> a(N);
  for(int i=0; i<N; i++) {
    cin>>a[i];
  }

  if(N == 1) {
    cout<<"1\n";
    return;
  }

  sort(all(a));

  ll mdiff = 2e9+10;
  for(int i=1; i<N; i++) {
    mdiff = min(mdiff, a[i]-a[i-1]);
  }

  ll cur = 1;
  ll X = mdiff;
  for(ll i=1; i*i<=mdiff; i++) {
    if(X%i == 0) {
      if(check(a, i)) {
        cur = max(cur, i);
      }
      if(X/i != i and check(a, X/i)) {
        cur = max(cur, X/i);
      }
    }
  }
  mdiff = cur;

  ll ans = 0;
  ll find = a[N-1];
  for(int i=N-1; i>=0; i--) {
    if(a[i] != find) {
      break;
    }
    find -= mdiff;
  }

  for(int i=0; i<N; i++) {
    ans += (a[N-1]-a[i])/mdiff;
  }
  ans += (a[N-1]-find)/mdiff;

  cout<<ans<<"\n";

}

int main ()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int t = 1;
    cin>>t;
    while (t--) solve();
    return 0;
}
