/**
 *    author: mralves 
 *    created: 23-02-2024 00:40:02       
**/
#include <bits/stdc++.h>

#define all(x) x.begin(),x.end()

// less is more
using namespace std;
using ll = long long;

void solve() {
  int N; cin>>N;
  int K; cin>>K;
  while(K--) {
    if(N%10) N--;
    else N/=10;
  }
  cout<<N<<"\n";
}

int main () {
  std::ios::sync_with_stdio(false);
  std::cin.tie(nullptr);

  int t = 1;
  while (t--) solve();
  return 0;
}
