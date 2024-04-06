/**
 *    author: mralves 
 *    created: 08-01-2024 21:25:24       
**/
#include <bits/stdc++.h>

#define all(x) x.begin(),x.end()

// less is more
using namespace std;
using ll = long long;

void solve() {
  int N; cin>>N;
  vector<int> a(N);
  for(int i=0; i<N; i++) {
    cin>>a[i];
  }

  map<int, int> primes;
  for(auto x:a) {
    for(int i=2; i*i<=x; i++) {
      while(x%i == 0) {
        primes[i]++;
        x/=i;
      }
    }
    if(x != 1)
      primes[x]++;
  }

  bool ok = true;
  for(auto [p, cnt] :primes) {
    if(cnt%N) {
      ok = false;
      break;
    }
  }

  cout<<(ok?"YES\n":"NO\n");
}

int main () {
  std::ios::sync_with_stdio(false);
  std::cin.tie(nullptr);

  int t = 1;
  cin>>t;
  while (t--) solve();
  return 0;
}
