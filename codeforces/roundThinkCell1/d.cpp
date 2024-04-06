/**
 *    author: mralves 
 *    created: 17-02-2024 11:34:22       
**/
#include <bits/stdc++.h>

#define all(x) x.begin(),x.end()

// less is more
using namespace std;
using ll = long long;

int calc_min(string s) {
  int N = s.size();
  string p = "";
  int cnt = 0;
  for(int i=0; i<N; i++) {
    if(s[i] == '0') {
      p+='0';
    } else {
      if(i > 1 and p[i-1] == '1') {
        p += '0';
      } else {
        cnt++;
        p+="01";
        i++;
      }
    }
  }
  return cnt;

}

void solve() {
  int N; cin>>N;
  string s; cin>>s;
  int ans = 0;
  //calc_min("0110000000111111");
  for(int i=0; i<N; i++) {
    for(int j=i; j<N; j++) {
      string t = s.substr(i, j-i+1);
      //int sz = j-i+1;
      //cout<<t<<"\n";
      //int ones = count(t.begin(), t.end(), '1');
      //cout<<calc_min(t)<<"\n";
      ans += calc_min(t);
    }
  }
  cout<<ans<<"\n";
}

int main () {
  std::ios::sync_with_stdio(false);
  std::cin.tie(nullptr);

  int t = 1;
  cin>>t;
  while (t--) solve();
  return 0;
}
