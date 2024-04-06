#include <bits/stdc++.h>

using namespace std;

int main() {
  int n, m;
  cin>>n>>m;

  vector<vector<int>> g(n*3);
  for(int i=0; i<m; i++) {
    int u, v;
    cin>>u>>v;
    u--, v--;
    g[u*3].push_back(v*3+1);
    g[u*3+1].push_back(v*3+2);
    g[u*3+2].push_back(v*3);
  }

  int s, t;
  cin>>s>>t;
  s--, t--;
  s = s*3;
  t = t*3;

  //cout<<s<<" "<<t<<"\n";
  vector<int> que, used(n*3), d(n*3);
  que.push_back(s);
  d[s] = 0;
  for(int i=0; i<(int)que.size(); i++) {
    for(auto v: g[que[i]]) {
      if(!used[v]) {
        d[v] = d[que[i]] + 1;
        used[v] = 1;
        que.push_back(v);
      }
    }
  }
  //cout<<d[t]<<"\n";
  if(!used[t]) {
    cout<<"-1\n";
  } else {
    cout<<d[t]/3<<"\n";
  }
  return 0;
}
