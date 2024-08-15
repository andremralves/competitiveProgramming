#include <bits/stdc++.h>

#define all(x) x.begin(),x.end()

// less is more
using namespace std;
using ll = long long;

void solve() {
  int N, A, B;
  cin>>N>>A>>B;

  if(A*2 <= B) {
    cout<<N*A<<"\n";
  } else {
    cout<<(N/2)*B+(N%2)*A<<"\n";
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
