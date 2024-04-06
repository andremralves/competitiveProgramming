#include <bits/stdc++.h>
using namespace std;

const int MAXN = 200005;
const int K = 20;
int table[K+1][MAXN];

int log2_floor(unsigned long i) {
  return i ? __builtin_clzll(1) - __builtin_clzll(i) : -1;
}

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  int N, Q;
  cin>>N>>Q;
  vector<int> a(N);
  for(int i=0; i<N; i++) {
    cin>>a[i];
  }

  // build sparse table
  copy(a.begin(), a.end(), table[0]);
  for(int i=1; i<=K; i++) {
    for(int j=0; j + (1<<i) <=N; j++) {
      table[i][j] = min(table[i-1][j], table[i-1][j+(1<<(i-1))]);
    }
  }

  while(Q--) {
    int l, r;
    cin>>l>>r;
    l--, r--;
    int i = log2_floor(r-l+1);
    cout<<min(table[i][l], table[i][r-(1<<i)+1])<<"\n";
  }

  return 0;
}
