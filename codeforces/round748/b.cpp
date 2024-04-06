/**
 *    author: mralves 
 *    created: 31-01-2024 10:41:55       
**/
#include <bits/stdc++.h>

#define all(x) x.begin(),x.end()

// less is more
using namespace std;
using ll = long long;

int find_digs(ll N, int d1, int d2) {
  vector<int> tmp;
  int k = 0;
  while(N) {
    if(tmp.size() == 2) break;
    int d = N%10;
    if(tmp.size() == 0 and d == d1) {
      tmp.push_back(d);
    } else if(tmp.size() == 1 and d == d2) {
      tmp.push_back(d);
    } else {
      k++;
    }
    N/=10;
  }
  return k;
}

void solve() {
  ll N; cin>>N;
  int k = 20;
  k = min({find_digs(N, 0, 0),
  find_digs(N, 5, 2),
  find_digs(N, 5, 7),
  find_digs(N, 0, 5)});
  cout<<k<<"\n";
}

int main () {
  std::ios::sync_with_stdio(false);
  std::cin.tie(nullptr);

  int t = 1;
  cin>>t;
  while (t--) solve();
  return 0;
}
