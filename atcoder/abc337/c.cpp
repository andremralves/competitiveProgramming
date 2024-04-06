/**
 *    author: mralves 
 *    created: 20-01-2024 08:59:03       
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
  }
  vector<int> used(N+1), ans;
  for(int i=1; i<=N; i++) {
    int j = i;
    vector<int> tmp;
    while(j != -1) {
      if(used[j]) break;
      tmp.emplace_back(j);
      used[j] = 1;
      j = a[j-1];
    }
    reverse(all(tmp));
    for(auto t:tmp) {
      ans.emplace_back(t);
    }
  }

  for(auto x:ans) {
    cout<<x<<" ";
  }
  cout<<"\n";
}

int main () {
  std::ios::sync_with_stdio(false);
  std::cin.tie(nullptr);

  int t = 1;
  while (t--) solve();
  return 0;
}
