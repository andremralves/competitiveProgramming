#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double Double;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

void solve(long long N, long long K, std::vector<long long> A) {
  int c[64][2] = {};
  for(int i = 0 ; i < A.size() ; i++){
    for(int j = 0 ; j < 60 ; j++){
      c[j][A[i] >> j & 1]++;
    }
  }
  ll x = 0;
  for(int i = 59 ; i >= 0 ; i--){
    if( c[i][0] > c[i][1] && (x|(1ll<<i)) <= K ){
      x |= (1ll<<i);
    }
  }
  cout<<x<<"\n";
  ll sum = 0;
  for(int i = 0 ; i < A.size() ; i++){
    sum += A[i] ^ x;
  }
  cout << sum << endl;
}


int main() {
  long long N;
  scanf("%lld", &N);
  long long K;
  scanf("%lld", &K);
  std::vector<long long> A(N);
  for (int i = 0; i < N; i++) {
    scanf("%lld", &A[i]);
  }
  solve(N, K, std::move(A));
  return 0;
}
