/**
 *    author: mralves 
 *    created: 13-01-2024 11:36:44       
**/
#include <bits/stdc++.h>

#define all(x) x.begin(),x.end()

// less is more
using namespace std;
using ll = long long;

void solve() {
  int N, K, X;
  cin>>N>>K>>X;
  vector<int> a(N);
  vector<int> hist(1001);
  ll sum = 0;
  for(int i=0; i<N; i++) {
    cin>>a[i];
    hist[a[i]]++;
  }
  sort(all(a));
  for(int i=0; i<N; i++) {
    if(i >= N-X)
      sum -= a[i];
    else 
      sum += a[i];
  }

  int l=N-X-1, r = N-1;

  ll ans = sum;

  while(r >= 0 and K > 0) {
    //cout<<"s:"<<sum<<"\n";
    sum += a[r];
    if(l >= 0)
      sum -= a[l]*2;
    l--, r--;
    K--;
    ans = max(ans, sum);
  }
  cout<<ans<<"\n";
}

int main () {
  std::ios::sync_with_stdio(false);
  std::cin.tie(nullptr);

  int t = 1;
  cin>>t;
  while (t--) solve();
  return 0;
}
