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
  char trump; cin>>trump;
  vector<string> cards(2*N);
  string ref = "CDHS";
  vector<vector<string>> grid(4);
  for(int i=0; i<2*N; i++) {
    string s; cin>>s;
    grid[ref.find(s[1])].push_back(s);
  }
  for(auto &deck:grid) {
    sort(deck.rbegin(), deck.rend());
  }

  int p = ref.find(trump);
  vector<string> ans;
  for(int i=0; i<4; i++) {
    if(i == p) continue;
    while(grid[i].size()>1) {
      ans.push_back(grid[i].back());
      grid[i].pop_back();
      ans.push_back(grid[i].back());
      grid[i].pop_back();
    }
  }
  bool ok = true;
  for(int i=0; i<4; i++) {
    if(i == p) continue;
    if(grid[i].size()) {
      ans.push_back(grid[i].back());
      grid[i].pop_back();
      if(grid[p].size()) {
        ans.push_back(grid[p].back());
        grid[p].pop_back();
      }
      else {
        ok = false;
        break;
      }
    }
  }

  if(!ok) {
    cout<<"IMPOSSIBLE\n";
    return;
  }
  while(grid[p].size()) {
    ans.push_back(grid[p].back());
    grid[p].pop_back();
  }
  for(int i=1; i<(int)ans.size(); i+=2) {
    cout<<ans[i-1]<<" "<<ans[i]<<"\n";
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
