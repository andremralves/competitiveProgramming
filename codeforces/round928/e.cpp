/**
 *    author: mralves 
 *    created: 19-02-2024 11:32:51       
**/
#include <bits/stdc++.h>

#define all(x) x.begin(),x.end()

// less is more
using namespace std;
using ll = long long;

void solve() {
  int N, K; cin>>N>>K;

  int p = 0;
  ll past = 0;
  ll x = N;
  while(past+(x+1)/2 < K) {
    past += (x+1)/2;
    x /= 2;
    p++;
  }
  K -= past+1;
  cout<<(1<<p)*(K*2+1)<<"\n";


  //vector<int> used(N+1);
  //for(int i=1; i<=N; i++) {
  //  for(int j=1; j*i<=N; j+=2) {
  //    if(!used[j*i]) {
  //      cout<<j*i<<" ";
  //      used[j*i] = 1;
  //    }
  //  }
  //  cout<<"\n";
  //}
}

int main () {
  std::ios::sync_with_stdio(false);
  std::cin.tie(nullptr);

  int t = 1;
  cin>>t;
  while (t--) solve();
  return 0;
}
