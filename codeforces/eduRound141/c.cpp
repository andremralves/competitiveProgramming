/**
 *    author: mralves 
 *    created: 27-01-2024 01:39:21       
**/
#include <bits/stdc++.h>

#define all(x) x.begin(),x.end()

// less is more
using namespace std;
using ll = long long;

void solve() {
  int N, M;
  cin>>N>>M;
  vector<pair<int, int>> a(N);
  for(int i=0; i<N; i++) {
    int x; cin>>x;
    a[i] = {x, i+1};
  }

  sort(a.begin(), a.end(), [&](auto x, auto y) {
      if(x.first != y.first) return x.first < y.first;
      return x.second > y.second;
      });

  //for(auto [x, y]:a) {
  //  cout<<x<<":"<<y<<" ";
  //}
  //cout<<"\n";
  int win = 0, lst = N;
  for(int i=0; i<N; i++) {
    if(M >= a[i].first) {
      M-=a[i].first;
      win++; a[i].second--;
      lst = i;
    } 
  }
  if(lst< N)
    M += a[lst].first;
  for(int i=lst+1; i<N; i++) {
    if(M >= a[i].first and a[i].second == win+1) {
      a[i].second--;
      a[lst].second++;
      break;
    }
  }
  int ans = 0;
  for(auto [x, y]:a) {
    if(win >= y) ans++;
  }
  cout<<(N+1)-ans<<"\n";
}

int main () {
  std::ios::sync_with_stdio(false);
  std::cin.tie(nullptr);

  int t = 1;
  cin>>t;
  while (t--) solve();
  return 0;
}
