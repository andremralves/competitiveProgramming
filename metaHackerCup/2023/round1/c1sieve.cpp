#include <bits/stdc++.h>

using namespace std;

void solve() {
  int N, Q;
  string s;
  cin>>N>>s>>Q;

  vector<char> op(N);
  for(int i=0; i<Q; i++) {
    int q;
    cin>>q;
    op[q-1] ^= 1;
  }
  int ans = 0;
  for(int i=0; i<N; i++) {
    if((s[i] == '1') ^ op[i])  {
      ans++;
      op[i] ^= 1;
    }
    if(op[i]) {
      for(int j=i; j<N; j+=(i+1)) {
        s[j] = '1'-(s[j]-'0');
      }
    }
  }
  cout<<ans<<"\n";
}

int main() {
  std::ios::sync_with_stdio(false);
  std::cin.tie(nullptr);
  int t;
  cin>>t;
  for(int i=1; i<=t; i++) {
    cout<<"Case #"<<i<<": ";
    solve();
  }
  return 0;
}
