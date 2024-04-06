#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define all(x) x.begin(),x.end()

int main() {
  int N;
  cin>>N;
  vector<int> a(N);
  for(int i=0; i<N; i++) {
    cin>>a[i];
  }
  ll X; cin>>X;
  ll sum = accumulate(all(a), 0ll);
  ll ans = 0; 
  ans += X/sum;
  sum = sum*ans;
  ans = ans*N;
  for(int i=0; i<N; i++) {
    if(sum > X) break;
    sum += a[i];
    ans++;
  }
  cout<<ans<<"\n";
  return 0;
}
