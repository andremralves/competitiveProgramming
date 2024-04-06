#include <bits/stdc++.h>
using namespace std;

using ll = long long;

ll next_square(ll X) {
  ll val = 1;
  for(int i=2; i*i<=X; i++) {
    int cnt = 0;
    ll v = 1;
    while(X%i==0) {
      X/=i; cnt++; v *= i;
    }
    if(cnt%2) v*=i; 
    val *= v;
  }
  if(X) val *= X*X;
  return val;
}


int main() {
  int N; cin>>N;
  map<ll, int> mp;
  ll ans = 0;
  for(int i=0; i<N; i++) {
    ll x; cin>>x;
    if(x == 0) {
      ans += i;
      mp[x]++;
      continue;
    }
    ll find = next_square(x)/x;
    ans += mp[find];
    ans += mp[0];
    mp[find]++;
  }
  cout<<ans<<"\n";
  return 0;
}

