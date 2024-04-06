/**
 *    author: mralves 
 *    created: 21-02-2024 02:13:43       
**/
#include <bits/stdc++.h>

#define all(x) x.begin(),x.end()

// less is more
using namespace std;
using ll = long long;

void solve() {
  int x[3], y[3];
  for(int i=0; i<3; i++) {
    cin>>x[i]>>y[i];
  }
  if(x[0] == x[1]) {
    cout<<x[2]<<" ";
  } else if(x[0] == x[2]){
    cout<<x[1]<<" ";
  } else {
    cout<<x[0]<<" ";
  }
  if(y[0] == y[1]) {
    cout<<y[2]<<" ";
  } else if(y[0] == y[2]){
    cout<<y[1]<<" ";
  } else {
    cout<<y[0]<<" ";
  }
  cout<<"\n";
}

int main () {
  std::ios::sync_with_stdio(false);
  std::cin.tie(nullptr);

  int t = 1;
  while (t--) solve();
  return 0;
}
