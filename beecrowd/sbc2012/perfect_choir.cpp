#include <bits/stdc++.h>
using namespace std;

using ll = long long;
int main() {
  int N;
  while(cin>>N) {
    vector<int> a(N);
    for(int i=0; i<N; i++) {
      cin>>a[i];
    }
    ll sum = accumulate(a.begin(), a.end(), 0ll);
    ll ans = 1;
    if(sum%N) {
      cout<<"-1\n";
      continue;
    } else {
      ll avg = sum/N;
      int l=0, r = N-1;
      while(l<r) {
        int take;
        if(abs(avg-a[l]) <= abs(avg-a[r])) {
          take = abs(avg-a[l]);
          a[l] += take;
          a[r] -= take;
          l++;
        } else {
          take = abs(avg-a[r]);
          a[l] += take;
          a[r] -= take;
          r--;
        }
        ans += take;
      }
    }
    cout<<ans<<"\n";
  }
}
