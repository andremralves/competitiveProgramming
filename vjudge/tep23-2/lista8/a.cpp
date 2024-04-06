#include <bits/stdc++.h>
using namespace std;
using ll = long long;

vector<vector<string>> grid;
pair<int, int> parse_cell(string cur) {
  int j = 0;
  while(!isdigit(cur[j])) j++;
  int x = atoi(cur.c_str()+j);
  int y = 0;
  for(int k=0; k<j; k++) {
    //cout<<cur[k]<<" "<<cur[k]-'A'+1<<" "<<pow(26, j-k-1)<<"\n";
    y += (cur[k]-'A'+1)*pow(26, j-k-1);
  }
  return make_pair(x-1, y-1);
}

vector<pair<int, int>> parse_string(string s) {
  vector<pair<int, int>> neigh;
  string cur = "";
  for(int i=1; i<(int)s.size(); i++) {
    if(s[i] == '+') {
      neigh.emplace_back(parse_cell(cur));
      cur = "";
    } else {
      cur += s[i];
    }
  }
  neigh.emplace_back(parse_cell(cur));
  return neigh;
}

ll dfs(int i, int j) {
  if(grid[i][j][0] != '=') {
    return atoi(grid[i][j].c_str());
  }
  ll sum = 0;
  for(auto p : parse_string(grid[i][j])) {
    sum += dfs(p.first, p.second);
  }
  grid[i][j] = to_string(sum);
  return sum;
}

void solve() {
  int N, M;
  cin>>M>>N;

  grid.assign(N, vector<string>(M));

  for(int i=0; i<N; i++) {
    for(int j=0; j<M; j++) {
      cin>>grid[i][j];
    }
  }

  for(int i=0; i<N; i++) {
    for(int j=0; j<M; j++) {
      cout<<dfs(i, j);
      if(j != M-1)
        cout<<" ";
    }
    cout<<"\n";
  }

   
}

int main() {
  //ios::sync_with_stdio(0);
  //cin.tie(0);

  //parse_string("=AA12+BA32");

  int t = 1;
  cin>>t;
  while(t--) {
    solve();
  }
  return 0;
}
