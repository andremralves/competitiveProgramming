/**
 *    author: mralves 
 *    created: 15-01-2024 11:34:35       
**/
#include <bits/stdc++.h>

#define all(x) x.begin(),x.end()

// less is more
using namespace std;
using ll = long long;

void solve() {
  ll H, W, x1, y1, x2, y2;
  cin>>H>>W>>x1>>y1>>x2>>y2;

  if(x2-x1 <= 0) {
    cout<<"Draw\n";
    return;
  }
  // alice
  if((x2-x1-1)%2 == 0) {
    ll walk = (x2-x1-1)/2;
    ll p1, p2;
    bool ok = false;
    if(y1<=y2) {
      p1 = min(W, walk+y1+1);
      p2 = min(W, walk+y2);
      if(p1 >= p2) ok = true;
    } else {
      p1 = max(1ll, y1-walk-1);
      p2 = max(1ll, y2-walk);
      if(p1 <= p2) ok = true;
    }
    //cout<<walk<<"\n";
    //cout<<p1<<" "<<p2<<"\n";
    if(ok) {
      cout<<"Alice\n";
    } else {
      cout<<"Draw\n";
    }
  }
  // bob
  else {
    ll walk = (x2-x1)/2;
    ll p1, p2;
    bool ok = false;
    if(y1<=y2) {
      p1 = max(1ll, y1-walk);
      p2 = max(1ll, y2-walk);
      if(p2 <= p1) ok = true;
    } else {
      p1 = min(W, walk+y1);
      p2 = min(W, walk+y2);
      if(p2 >= p1) ok = true;
    }
    //cout<<walk<<"\n";
    //cout<<p1<<" "<<p2<<"\n";
    if(ok) {
      cout<<"Bob\n";
    } else {
      cout<<"Draw\n";
    }
  }
}

int main () {
  std::ios::sync_with_stdio(false);
  std::cin.tie(nullptr);

  int t = 1;
  cin>>t;
  while (t--) solve();
  return 0;
}
