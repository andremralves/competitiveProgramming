/**
 *    author: mralves 
 *    created: 21-01-2024 20:36:21       
**/
#include <bits/stdc++.h>

#define all(x) x.begin(),x.end()

// less is more
using namespace std;
using ll = long long;

void solve() {
  int N; cin>>N;
  string t; cin>>t;
  string s;
  for(int i=1; i<=100000; i++) {
    if(i%3==0)
      s += 'F';
    if(i%5==0)
      s += 'B';
  }

  if(s.find(t) != string::npos) {
    cout<<"YES\n";
  } else {
    cout<<"NO\n";
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
