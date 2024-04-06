#include <bits/stdc++.h>

using namespace std;

void solve() {
  int N; cin>>N;
  string s; cin>>s;

  vector<int> a[2];
  int cnt = 1;
  vector<int> b;
  for(int i=0; i<N; i++) {
    int cur = s[i]-'0';
    if(cur == 0) {
      if(a[1].size() == 0) {
        a[0].emplace_back(cnt);
        b.emplace_back(cnt++);
      } else {
        b.emplace_back(a[1].back());
        a[0].emplace_back(a[1].back());
        a[1].pop_back();
      }
    } else {
      if(a[0].size() == 0) {
        a[1].emplace_back(cnt);
        b.emplace_back(cnt++);
      } else {
        b.emplace_back(a[0].back());
        a[1].emplace_back(a[0].back());
        a[0].pop_back();
      }
    }
  }
  cout<<*max_element(b.begin(), b.end())<<"\n";
  for(auto x:b) {
    cout<<x<<" ";
  }
  cout<<"\n";
}

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  int t = 1;
  cin>>t;
  while(t--) {
    solve();
  }
  return 0;
}
