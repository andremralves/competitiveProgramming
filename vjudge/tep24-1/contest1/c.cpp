#include <bits/stdc++.h>

#define all(x) x.begin(),x.end()

// less is more
using namespace std;
using ll = long long;

void solve() {
  int N, K; cin>>N>>K;

  int a = N;
  for(int i=0; i<K; i++) {
    string x = to_string(a);
    string y = to_string(a);
    sort(x.begin(), x.end());
    sort(y.rbegin(), y.rend());
    a = atoi(&y[0])-atoi(&x[0]);
  }
  cout<<a<<"\n";
}

int main () {
  std::ios::sync_with_stdio(false);
  std::cin.tie(nullptr);

  int t = 1;
  while (t--) solve();
  return 0;
}
