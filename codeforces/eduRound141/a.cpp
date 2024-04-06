/**
 *    author: mralves 
 *    created: 27-01-2024 01:39:21       
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
  sort(all(a));
  vector<int> ans;
  for(int i=0; i<(N+1)/2; i++) {
    ans.emplace_back(a[i]);
    if(i != N-i-1)
      ans.emplace_back(a[N-i-1]);
  }
  int sum = 0; bool ok = true;
  for(int i=0; i<N; i++) {
    if(ans[i] == sum) ok = false;
    sum += ans[i];
  }
  if(ok) {
    cout<<"YES\n";
    for(auto x:ans) {
      cout<<x<<" ";
    }
    cout<<"\n";
  } else {
    cout<<"NO\n";
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
