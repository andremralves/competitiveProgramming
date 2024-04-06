/**
 *    author: mralves 
 *    created: 19-01-2024 23:27:31       
**/
#include <bits/stdc++.h>

#define all(x) x.begin(),x.end()

// less is more
using namespace std;
using ll = long long;

void solve() {
  string s; cin>>s;
  ll pos; cin>>pos;
  ll N = s.size();
  ll acc = 0, rem = 0, X = N;
  while(acc+X < pos) {
    acc+=X;
    rem++; X--;
  }

  string t;
  for(int i=0; i<N; i++) {
    if(rem and !t.empty() and s[i] < t.back()) {
      t.pop_back();
      rem--; i--;
    } else {
      t+=s[i];
    }
  }
  while(rem--) t.pop_back();
  pos = pos-acc-1;
  //cout<<t<<"\n";
  cout<<t[pos];
}

int main () {
  std::ios::sync_with_stdio(false);
  std::cin.tie(nullptr);

  int t = 1;
  cin>>t;
  while (t--) solve();
  cout<<"\n";
  return 0;
}
