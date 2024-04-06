/**
 *    author: mralves 
 *    created: 05-03-2024 11:37:48       
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

  vector<int> pre(N), suf(N);
  vector<int> cnt(N);
  int x = 0;
  // I don't need the last
  for(int i=1; i<N; i++) {
    cnt[a[i-1]]++;
    while(cnt[x]>0) x++;
    pre[i-1] = x;
  }
  x = 0;
  cnt.assign(N, 0);
  for(int i=N-1; i>0; i--) {
    cnt[a[i]]++;
    while(cnt[x] > 0) x++;
    suf[i] = x;
  }
  for(int i=1; i<N; i++) {
    if(pre[i-1] == suf[i]) {
      cout<<"2\n";
      cout<<1<<" "<<i<<"\n";
      cout<<i+1<<" "<<N<<"\n";
      return;
    }
  }
  cout<<"-1\n";
}

int main () {
  std::ios::sync_with_stdio(false);
  std::cin.tie(nullptr);

  int t = 1;
  cin>>t;
  while (t--) solve();
  return 0;
}
