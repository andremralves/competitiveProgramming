#include <bits/stdc++.h>

#define all(x) x.begin(),x.end()

// less is more
using namespace std;
using ll = long long;

bool check(string s, int K) {
  int N = s.size();
  vector<int> in(N+1);
  int cnt = 0;
  for(int i=0; i<N; i++) {
    cnt += in[i];
    if(cnt%2) s[i] = '1'-s[i]+'0';
    if(s[i] == '0') {
      s[i] = '1';
      cnt++;
      if(i+K > N) return false;
      in[i+K]--;
    }
  }
  return true;
}

void solve() {
  int N; cin>>N;
  string s; cin>>s;

  for(int k=N; k>=1; k--) {
    if(check(s, k)) {
      cout<<k<<"\n";
      return;
    }
  }
}

int main () {
  std::ios::sync_with_stdio(false);
  std::cin.tie(nullptr);

  int t = 1;
  cin>>t;
  while (t--) solve();
  return 0;
}
