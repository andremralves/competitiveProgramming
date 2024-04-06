/**
 *    author: mralves 
 *    created: 20-01-2024 08:59:03       
**/
#include <bits/stdc++.h>

#define all(x) x.begin(),x.end()

// less is more
using namespace std;
using ll = long long;

void solve() {
  int N; cin>>N;
  int A=0, B=0;
  for(int i=0; i<N; i++) {
    int a, b;
    cin>>a>>b;
    A += a; B+=b;
  }
  if(A>B) {
    cout<<"Takahashi\n";
  } else if(A<B) {
    cout<<"Aoki\n";
  } else {
    cout<<"Draw\n";
  }
}

int main () {
  std::ios::sync_with_stdio(false);
  std::cin.tie(nullptr);

  int t = 1;
  while (t--) solve();
  return 0;
}
