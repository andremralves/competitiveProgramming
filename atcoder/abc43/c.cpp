#include <bits/stdc++.h>

using namespace std;

int main() {
  int N; cin>>N;
  vector<int> a(N);
  for(int i=0; i<N; i++) {
    cin>>a[i];
  }

  int ans = 1e7;
  for(int x=-100; x<=100; x++) {
    int sum = 0;
    for(auto y:a) {
      sum += (x-y)*(x-y);
    }
    ans = min(sum, ans);
  }
  cout<<ans<<"\n";
  return 0;
}


