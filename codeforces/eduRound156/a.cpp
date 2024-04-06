/**
 *    author: mralves 
 *    created: 19-01-2024 23:27:31       
**/
#include <bits/stdc++.h>

#define all(x) x.begin(),x.end()

// less is more
using namespace std;
using ll = long long;

void solve() {
  int N; cin>>N;
  
  int a = 2, y = 1;
  int x = N-3;
  bool ok = true;
  while(x%3 == 0 or a%3==0) {
    a++; x--;
    if(x<=0) {
      break;
    }
  }
  if(x<=0) ok = false;

  if(!ok or x == a or x == y) {
    cout<<"NO\n";
  } else {
    cout<<"YES\n";
    cout<<x<<" "<<y<<" "<<a<<"\n";
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
