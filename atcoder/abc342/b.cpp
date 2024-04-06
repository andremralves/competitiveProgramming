#include <bits/stdc++.h>
using namespace std;

int main() {
  int N; cin>>N;
  vector<int> p(N+1);
  for(int i=1; i<=N; i++) {
    int x; cin>>x;
    p[x] = i;
  }
  int Q; cin>>Q;
  while(Q--) {
    int x, y;
    cin>>x>>y;
    if(p[x] < p[y])
      cout<<x<<"\n";
    else
      cout<<y<<"\n";
  }
  return 0;
}
