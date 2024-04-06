#include <bits/stdc++.h>

using namespace std;

const int MAXN = 200;
long long C[MAXN+1][MAXN+1];

int main() {
  std::ios::sync_with_stdio();
  std::cin.tie(nullptr);
  long long L; cin>>L;

  C[0][0] = 1;
  for(int n=1; n<=MAXN; n++) {
    C[n][0] = C[n][n] = 1;
    for(int i=1; i<n; i++) {
      C[n][i] = C[n-1][i-1] + C[n-1][i];
    }
  }

  cout<<C[L-1][11]<<"\n";

  return 0;
}
