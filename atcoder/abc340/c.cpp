#include <bits/stdc++.h>

using namespace std;
using ll = long long;

map<ll, ll> memo;
ll f(ll X) {
  if(X == 1) return 0;
  if(memo.count(X)) return memo[X];
  ll res = X+f(X/2)+f((X+1)/2);
  memo[X] = res;
  return res;
}

int main() {
  ll N; cin>>N;
  cout<<f(N)<<"\n";
  return 0;
}
