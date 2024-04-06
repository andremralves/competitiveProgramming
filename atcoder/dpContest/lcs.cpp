#include <bits/stdc++.h>

using namespace std;

int main() {
  string s, t;
  cin>>s>>t;

  vector<vector<pair<int, pair<int, int>>>> dp(s.size()+1, vector<pair<int, pair<int, int>>>(t.size()+1));
  for(int i=0; i<(int)s.size(); i++) {
    for(int j=0; j<(int)t.size(); j++) {
      if(s[i] == t[j]) {
        if(dp[i+1][j+1].first < dp[i][j].first+1) {
            dp[i+1][j+1].first = dp[i][j].first+1;
            dp[i+1][j+1].second = {i, j};
        }
      } else {
        if(dp[i+1][j].first < dp[i][j].first) {
          dp[i+1][j].first = dp[i][j].first;
          dp[i+1][j].second = {i, j};
        }
        if(dp[i][j+1].first < dp[i][j].first) {
          dp[i][j+1].first = dp[i][j].first;
          dp[i][j+1].second = {i, j};
        }
      }
    }
  }
  int ans = 0;
  pair<int, int> pos;
  for(int i= 0; i<(int)dp.size(); i++) {
    for(int j = 0; j<(int)dp[0].size(); j++) {
      if(ans < dp[i][j].first) {
        ans = dp[i][j].first;
        pos = {i, j};
      }
    }
  }
  string res;
  do {
    pair<int, int> next = dp[pos.first][pos.second].second;
    if(dp[pos.first][pos.second].first-1 == dp[next.first][next.second].first) {
      res += s[next.first];
    }
    pos = next;
  } while(dp[pos.first][pos.second].first > 0);

  reverse(res.begin(), res.end());

  cout<<res<<"\n";
  return 0;
}
