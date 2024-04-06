/**
 *    author: mralves 
 *    created: 30-03-2024 11:34:58       
**/
#include <bits/stdc++.h>

#define all(x) x.begin(),x.end()

// less is more
using namespace std;
using ll = long long;

void solve() {
  int N, K;
  cin>>N>>K;
  if(N == K) {
    for(int i=0; i<N; i++) {
      cout<<1<<" ";
    }
    cout<<"\n";
  } else if(K == 1) {
    for(int i=0; i<N; i++) {
      cout<<i+1<<" ";
    }
    cout<<"\n";
  } else {
    cout<<"-1\n";
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
