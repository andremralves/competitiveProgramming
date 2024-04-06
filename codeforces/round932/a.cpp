/**
 *    author: mralves 
 *    created: 05-03-2024 11:37:48       
**/
#include <bits/stdc++.h>

#define all(x) x.begin(),x.end()

// less is more
using namespace std;
using ll = long long;

void solve() {
  int N; cin>>N;
  string s; cin>>s;
  string rev = s;
  reverse(rev.begin(), rev.end());
  if(s <= rev) {
    cout<<s<<"\n";
  } else {
    cout<<rev;
    cout<<s<<"\n";
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
