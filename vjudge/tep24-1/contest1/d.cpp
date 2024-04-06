#include <bits/stdc++.h>

#define all(x) x.begin(),x.end()

// less is more
using namespace std;
using ll = long long;


ll M;
const ll INF = 1e18+10;
ll tobase10(string &X, ll b) {
  ll res = 0;
  ll a = 1;
  for(int i=0; i<(int)X.size(); i++) {
    char c = X[i];
    int v = c-'0';
    res += v*a;
    if(res > M) return -1;
    if(a>M/b and i != (int)X.size()-1) return -1;
    a *= b;
  }
  return res;
}

void solve() {
  string X;
  cin>>X>>M;
  int d = 0;
  for(int i=0; i<(int)X.size(); i++) {
    d = max(d, X[i]-'0');
  }
  reverse(X.begin(), X.end());
  ll lo = d, hi = LLONG_MAX;
  while(hi-lo>1){
    ll m = lo+(hi-lo)/2;
    //cout<<hi<<"\n";
    if(tobase10(X, m) == -1) {
      hi = m;
    } else {
      lo = m;
    }

  }
  if(X.size() == 1) {
    if(d <= M)
      cout<<1<<"\n";
    else
      cout<<0<<"\n";
  } else {
  cout<<lo-d<<"\n";
  }
}

int main () {
  std::ios::sync_with_stdio(false);
  std::cin.tie(nullptr);

  int t = 1;
  while (t--) solve();
  return 0;
}
