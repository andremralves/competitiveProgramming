/**
 *    author: mralves 
 *    created: 17-02-2024 11:34:22       
**/
#include <bits/stdc++.h>

#define all(x) x.begin(),x.end()

// less is more
using namespace std;
using ll = long long;

void solve() {
  int N; cin>>N;
  vector<int> a(N);
  for(int i=0; i<N; i++) {
    cin>>a[i];
    a[i] += i+1;
  }
  sort(a.rbegin(), a.rend());
  for(int i=0; i<N; i++) {
    int j = i;
    while(j < N and a[j])
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
