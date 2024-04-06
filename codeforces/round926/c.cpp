#include <bits/stdc++.h>
using namespace std;

using ll = long long;
void solve() {
  ll K, X, A;
  cin>>K>>X>>A;
  ll loss = 0;
  ll bet = 1;
  bool ok = true;
  for(int i=0; i<X+1; i++) {
    //cout<<"bet:"<<bet<<"\n";
    loss += bet;
    bet = (loss+K-1)/(K-1);
    if(loss > A) {
      ok = false;
      break;
    }
  }
  //cout<<bet<<" "<<loss<<"\n";
  if(ok) {
    cout<<"YES\n";
  } else {
    cout<<"NO\n";
  }
}

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  int t; cin>>t;
  while(t--) solve();
  return 0;
}
