#include <bits/stdc++.h>

#define all(x) x.begin(),x.end()

// less is more
using namespace std;
using ll = long long;

void solve() {
  int N, M;
  cin>>N>>M;
  vector<int> a(N);
  for(int i=0; i<N; i++) {
    cin>>a[i];
  }
  int mex = 0;
  vector<int> has(N+1);
  for(int i=0; i<M; i++) {
    has[a[i]]++;
  }
  while(has[mex]) mex++;
  int last = mex;
  //cout<<last<<"\n";
  int ans = mex;
  for(int i=M; i<N; i++) {
    has[a[i]]++;
    has[a[i-M]]--;
    //cout<<has[a[i]]<<" "<<has[a[i-M]]<<"\n";
    if(a[i-M] <= mex and has[a[i-M]]==0) {
      last = mex;
      mex = a[i-M];
    } else {
      if(has[mex])
        mex = last;
    }
    ans = min(ans, mex);
  }
  cout<<ans<<"\n";
}

int main () {
  std::ios::sync_with_stdio(false);
  std::cin.tie(nullptr);

  int t = 1;
  while (t--) solve();
  return 0;
}
