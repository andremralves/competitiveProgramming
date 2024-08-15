#include <bits/stdc++.h>

#define all(x) x.begin(),x.end()

// less is more
using namespace std;
using ll = long long;

void solve() {
  int N, M; 
  cin>>N>>M;
  vector<int> num(N, -1);
  for(int i=0; i<M; i++) {
    int s, c;
    cin>>s>>c; s--;
    if(num[s] == -1)
      num[s] = c;
    else {
      if(num[s] == c) continue;
      cout<<-1<<"\n";
      return;
    }
  }
  if(num.size() > 1 and num[0] == 0) {
    cout<<-1<<"\n";
    return;
  }
  if(num.size() > 1 and num[0] == -1) num[0] = 1;
  for(auto x:num) {
    if(x == -1) cout<<0;
    else cout<<x;
  }
  cout<<"\n";
}

int main () {
  std::ios::sync_with_stdio(false);
  std::cin.tie(nullptr);

  int t = 1;
  while (t--) solve();
  return 0;
}
