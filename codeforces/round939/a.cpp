#include <bits/stdc++.h>

#define all(x) x.begin(),x.end()

// less is more
using namespace std;
using ll = long long;

void solve() {
  int K, Q;
  cin>>K>>Q;
  vector<int> a(K);
  for(int i=0; i<K; i++) {
    cin>>a[i];
  }
  for(int i=0; i<Q; i++) {
    int N; cin>>N;
    bool ok = true;
    while(ok) {
      ok = false;
      int j = 0;
      for(; j<K; j++) {
        if(a[j] <= N) {
          ok = true;
        } else {
          break;
        }
      }
      N -= j;
    }
    cout<<N<<" ";
  }
  cout<<"\n";
}

int main () {
  std::ios::sync_with_stdio(false);
  std::cin.tie(nullptr);

  int t = 1;
  cin>>t;
  while (t--) solve();
  return 0;
}
