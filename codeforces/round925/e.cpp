#include <bits/stdc++.h>
using namespace std;

void solve() {
  int N, M;
  cin>>N>>M;
  vector<int> a(N);
  int tot = 0;
  for(int i=0; i<N; i++) {
    string s; cin>>s;
    int j = s.size()-1;
    while(j>=0 and s[j]=='0') j--;
    a[i] = s.size()-j-1;
    tot += s.size();
  }
  sort(a.rbegin(), a.rend());
  for(int i=0; i<N; i+=2) {
    tot -= a[i];
  }
  cout<<(tot>=M+1 ? "Sasha":"Anna")<<"\n";
}

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  int t; cin>>t;
  while(t--) solve();
  return 0;
}
