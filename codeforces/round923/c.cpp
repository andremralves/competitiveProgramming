/**
 *    author: mralves 
 *    created: 06-02-2024 11:43:54       
**/
#include <bits/stdc++.h>

#define all(x) x.begin(),x.end()

// less is more
using namespace std;
using ll = long long;

void solve() {
  int N, M, K;
  cin>>N>>M>>K;
  vector<int> a(N), b(M);
  for(int i=0; i<N; i++) cin>>a[i];
  for(int i=0; i<M; i++) cin>>b[i];

  sort(a.begin(), a.end());
  sort(b.begin(), b.end());

  vector<int> ks(K+1);
  for(int i=1; i<=K; i++) {
    bool founda = binary_search(a.begin(), a.end(), i);
    bool foundb = binary_search(b.begin(), b.end(), i);
    if(founda) {
      ks[i] += 1;
    }
    if(foundb) {
      ks[i] += 2;
    }
  }
  bool ok = true;
  if(count(ks.begin()+1, ks.end(), 1) > K/2) ok = false;
  if(count(ks.begin()+1, ks.end(), 2) > K/2) ok = false;
  if(count(ks.begin()+1, ks.end(), 0) > 0) ok = false;
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
