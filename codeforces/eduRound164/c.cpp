#include <bits/stdc++.h>

#define all(x) x.begin(),x.end()

// less is more
using namespace std;
using ll = long long;

void solve() {
  string X, Y;
  cin>>X>>Y;
  int N = X.size();
  int p = N-1;
  for(int i=0; i<N; i++) {
    if(X[i] != Y[i]) {
      p = i;
      break;
    }
  }
  for(int i=p+1; i<N; i++) {
    if(X[p] > Y[p]) {
      if(Y[i] < X[i]) swap(X[i], Y[i]);
    } else {
      if(Y[i] > X[i]) swap(X[i], Y[i]);
    }
  }
  cout<<X<<"\n";
  cout<<Y<<"\n";
}

int main () {
  std::ios::sync_with_stdio(false);
  std::cin.tie(nullptr);

  int t = 1;
  cin>>t;
  while (t--) solve();
  return 0;
}
