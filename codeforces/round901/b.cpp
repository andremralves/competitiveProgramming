/**
 *    author: mralves 
 *    created: 10-01-2024 23:05:08       
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
  sort(all(a)); sort(all(b));

  vector<ll> k(10);
  k[0] = accumulate(all(a), 0ll);
  for(int i=1; i<10; i++) {
    if(i%2) {
      if(b.back() > *a.begin()) {
        int mx = b.back();
        b.pop_back();
        b.emplace_back(*a.begin());
        a.erase(a.begin());
        a.emplace_back(mx);
      }
    } else {
      if(a.back() > *b.begin()) {
        int mx = a.back();
        a.pop_back();
        a.emplace_back(*b.begin());
        b.erase(b.begin());
        b.emplace_back(mx);
      }
    }
    sort(all(a)); sort(all(b));
    k[i] = accumulate(all(a), 0ll);
  }
  if(K < 10) {
    cout<<k[K]<<"\n";
  } else {
    cout<<(K%2?k[9]:k[8])<<"\n";
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
