/**
 *    author: mralves 
 *    created: 18-02-2024 09:03:00       
**/
#include <bits/stdc++.h>

#define all(x) x.begin(),x.end()

// less is more
using namespace std;
using ll = long long;

void solve() {
  int N; cin>>N;
  string s; cin>>s;
  vector<int> a(N);
  for(int i=0; i<N; i++) {
    a[i] = s[i]-'0';
    if(i) a[i] += a[i-1];
  }
  reverse(a.begin(), a.end());
  for(int i=0; i<(int)a.size(); i++) {
    int x = a[i];
    a[i] = x%10; x/=10;
    if(i == (int)a.size()-1) {
      if(x == 0) break;
      a.push_back(x);
    }
    else
      a[i+1] += x;
  }
  while(a.back() == 0) a.pop_back();
  reverse(a.begin(), a.end());
  for(auto x:a) {
    cout<<x;
  }
  cout<<"\n";

}

int main () {
  //std::ios::sync_with_stdio(false);
  //std::cin.tie(nullptr);

  int t = 1;
  cin>>t;
  while (t--) solve();
  return 0;
}
