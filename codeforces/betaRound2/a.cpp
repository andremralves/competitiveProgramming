#include <bits/stdc++.h>
using namespace std;

int main() {
  int N; cin>>N;
  map<string, vector<int>> mp;
  vector<pair<int, string>> hist;
  while(N--) {
    string s; int x;
    cin>>s>>x;
    if(mp.count(s)) x += mp[s].back();
    mp[s].push_back(x);
    hist.push_back({x, s});
  }
  int best = 0;
  for(auto [name, vec]:mp) {
    best = max(best, vec.back());
  }
  for(auto p:hist) {
    if(mp[p.second].back() != best) continue;
    if(p.first >= best) {
      cout<<p.second<<"\n";
      break;
    }
  }
  return 0;
}
