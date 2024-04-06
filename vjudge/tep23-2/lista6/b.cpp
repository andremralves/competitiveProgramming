#include <bits/stdc++.h>

using namespace std;

int main() {
  int N;
  cin>>N;

  vector<int> p(N+1);
  for(int i=1; i<=N; i++) {
    cin>>p[i];
  }

  int ans = 0;
  for(int i=1; i<=N; i++) {
    int cur = i;
    int deph = 0;
    while(cur != -1) {
      cur = p[cur];
      deph++;
    }
    ans = max(ans, deph);
  }
  cout<<ans<<"\n";
  return 0;
}
