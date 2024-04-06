/**
 *    author: mralves 
 *    created: 16-03-2024 11:35:09       
**/
#include <bits/stdc++.h>

#define all(x) x.begin(),x.end()

// less is more
using namespace std;
using ll = long long;

void solve() {
  int N, K;
  cin>>N>>K;
  if(K>=N-1) {
    cout<<"1\n";
  } else {
    cout<<N<<"\n";
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
