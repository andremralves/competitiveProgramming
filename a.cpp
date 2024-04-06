#include <bits/stdc++.h>
using namespace std;

using ll = long long;
ll to_bin(int x) {
  if(x == 0) return x;
  ll r = to_bin(x/2);
  return x%2+r*10;
}

ll to_bin2(int x) {
  ll res = 0;
  for(ll fat=1; x>0; fat*=10) {
    int r = x%2;
    x/=2;
    res += r*fat;
  }
  return res;
}

void solve() {
  int N; cin>>N;
  cout<<to_bin(N)<<"\n";
  cout<<to_bin2(N)<<"\n";
}

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  int t = 1;
  while(t--)
    solve();
}
