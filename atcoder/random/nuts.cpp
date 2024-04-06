#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  cin>>N;
  int ans = 0;
  for(int i=0; i<N; i++) {
    int x; cin>>x;
    ans += max(x-10, 0);
  }
  cout<<ans<<"\n";
  return 0;
}
