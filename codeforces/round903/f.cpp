#include <bits/stdc++.h>

using namespace std;

vector<int> minp, primes;
void sieve(int n) {
  minp.assign(n+1, 0);
  primes.clear();
  for(int i=2; i<=n; i++) {
    if(minp[i] == 0) {
      minp[i] = i;
      primes.emplace_back(i);
    }
    for(auto p:primes) {
      if(p*i > n) break;
      minp[i*p] = p;
      if(minp[i] == p) break;
    }
  }
}

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);


  return 0;
}
