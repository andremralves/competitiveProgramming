#include <bits/stdc++.h>
using namespace std;

using ll = long long;
void solve() {
  ll N, M;
  cin>>N>>M;
  bool ok = true;
  while(ok) {
    ok = false;
    cout<<"N:"<<N<<"\n";
    ll X = N;
    while(X) {
      if(X%10) {
        cout<<"num:"<<X%10<<"\n";
        int y = 10/gcd(X%10, 10);
        cout<<y<<"\n";
        if(y <= M) {
          M /= y;
          ok = true;
          N *= y;
        }
        break;
      }
      X /= 10;
    }
  }
  cout<<N<<"\n";
}

int main() {
  int t = 1;
  cin>>t;
  while(t--) {
    solve();
  }
  return 0;
}
