#include <bits/stdc++.h>

using namespace std;

int main() {
  int N, R;
  cin>>N>>R;

  vector<int> returned(N+1);
  for(int i=0; i<R; i++) {
    int x; cin>>x;
    returned[x] = 1;
  }

  vector<int> ans;
  for(int i=1; i<=N; i++) {
    if(!returned[i]) ans.emplace_back(i);
  }

  if(ans.size() == 0) {
    cout<<"*\n";
  } else {
    for(auto x: ans) {
      cout<<x<<" ";
    }
    cout<<"\n";
  }

  return 0;
}
