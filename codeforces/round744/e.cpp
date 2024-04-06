/**
 *    author: mralves 
 *    created: 31-01-2024 04:09:39       
**/
#include <bits/stdc++.h>

#define all(x) x.begin(),x.end()

// less is more
using namespace std;
using ll = long long;

void solve() {
  int N; cin>>N;
  vector<int> a(N);
  deque<int> dq;
  for(int i=0; i<N; i++) {
    cin>>a[i];
  }

  for(int i=0; i<N; i++) {
    if(dq.empty()) {
      dq.emplace_back(a[i]);
    } else if(dq.front() > a[i]) {
      dq.emplace_front(a[i]);
    } else {
      dq.emplace_back(a[i]);
    }
  }
  for(auto x:dq) {
    cout<<x<<" ";
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
