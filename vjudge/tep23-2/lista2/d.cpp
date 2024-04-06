#include <bits/stdc++.h>

using namespace std;

const vector<pair<int, int>> dir8 = {{0, 1}, {1, 0}, {1, 1}, 
    {0, -1}, {-1, 0}, {-1, -1}, {-1, 1}, {1, -1}};

int main() {
  string s, t;
  cin>>s>>t;

  int n = 8;
  set<pair<int, int>> used;
  vector<pair<int, int>> que;
  map<pair<int, int>, pair<int, int>> p;
  que.emplace_back(s[0]-'a', s[1]-'0'-1);
  used.insert(que[0]);
  for(int i=0; i<(int)que.size(); i++) {
    for(auto [x, y] : dir8) {
      int a = que[i].first + x;
      int b = que[i].second + y;
      if(a < 0 or a >= n or b < 0 or b >= n) continue;
      if(!used.count({a, b})) {
        used.insert({a, b});
        que.emplace_back(a, b);
        p[make_pair(a, b)] = {que[i]};
      }
    }
  }

  pair<int, int> end = {t[0]-'a', t[1]-'0'-1};
  pair<int, int> cur = end;
  vector<pair<int, int>> path;
  path.emplace_back(cur);
  while(p.count(cur)) {
    cur = p[cur];
    path.emplace_back(cur);
  }
  reverse(path.begin(), path.end());

  cout<<path.size()-1<<"\n";
  for(int i=0; i<(int)path.size()-1; i++) {
    string move;
    if(path[i].first < path[i+1].first)
      move += "R";
    if(path[i].first > path[i+1].first)
      move += "L";
    if(path[i].second < path[i+1].second)
      move += "U";
    if(path[i].second > path[i+1].second)
      move += "D";
    cout<<move<<"\n";
  }

  return 0;
}

