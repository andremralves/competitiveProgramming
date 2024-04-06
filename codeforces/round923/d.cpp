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
  int N; cin>>N;
  vector<int> a(N);
  for(int i=0; i<N; i++) {
    cin>>a[i];
  }

  vector<int> psum(N);
  psum[N-1] = N;
  for(int i=N-2; i>=0; i--) {
    if(a[i] == a[i+1])
      psum[i] = psum[i+1];
    else
      psum[i] = i+1;
  }

  int Q; cin>>Q;
  while(Q--) {
    int l, r;
    cin>>l>>r;
    l--, r--;
    if(psum[l] <= r) {
      cout<<l+1<<" "<<psum[l]+1<<"\n";
    } else {
      cout<<"-1 -1\n";
    }
  }
}

int main () {
  std::ios::sync_with_stdio(false);
  std::cin.tie(nullptr);

  int t = 1;
  cin>>t;
  while (t--) {
    solve();
    if(t != 0)
      cout<<"\n";
  }
  return 0;
}
