/**
 *    author: mralves 
 *    created: 27-02-2024 11:34:34       
**/
#include <bits/stdc++.h>

#define all(x) x.begin(),x.end()

// less is more
using namespace std;
using ll = long long;

void solve() {
  int N; cin>>N;
  int sum = 0;
  vector<int> a(N);
  for(int i=0; i<N; i++) {
    cin>>a[i];
    sum += a[i];
  }
  if(sum%3 == 0) {
    cout<<0<<"\n";
  } else if(sum%3==2) {
    cout<<1<<"\n";
  } else {
    for(int i=0; i<N; i++) {
      if((sum-a[i])%3==0) {
        cout<<1<<"\n";
        return;
      }
    }
    cout<<2<<"\n";
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
