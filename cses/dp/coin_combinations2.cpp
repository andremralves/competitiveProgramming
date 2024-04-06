#include <bits/stdc++.h>
 
using namespace std;
using ll = long long;
const ll MOD = 1e9+7;
 
int main() {
  int n, x;
  cin>>n>>x;
 
  vector<int> a(n);
  for(int i=0; i<n; i++) {
    cin>>a[i];
  }
 
  vector<ll> dp(x+1);
  for(int j=0; j<n; j++) {
    for(int i=0; i<=x; i++) {
      if(i-a[j] >= 0) {
        dp[i] += (a[j] == i);
        dp[i] = (dp[i-a[j]] + dp[i]) % MOD;
      }
    }
  }
  cout<<dp[x]<<"\n";
  return 0;
}
