#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(0);
  cin.tie(nullptr);

  int N, X;
  cin>>N>>X;

  vector<int> a(N);
  for(int i=0; i<N; i++) {
    cin>>a[i];
  }

  int r = 0, sum = 0, ans = 0;
  for(int l=0; l<N; l++) {
    while(r<N) {
      sum += a[r];
      if(sum > X) {
        sum -= a[r];
        break;
      }
      r++;
    }
    if(sum == X)
      ans++;
    sum -= a[l];
  }

  cout<<ans<<"\n";
  return 0;
}
