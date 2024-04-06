#include <bits/stdc++.h>

using namespace std;

const char cur_dir = 'u';

const char walk = 'w';
const char jog = 'j';
const char run = 'R';
const char sprint = 's';

int MAXN = 100;

int grid[MAXN][MAXN];

map<pair<int, int>, vector<array<int, 3>>> G;


vector<int> moves = {{-1, 0}, {0, 1}, {1, 0}, {0, -1}};

int main() {

  int X = 50, Y = 50;
  pair<int, int> cur_pos = {50, 50};

  int dirs;
  cout<<'c'<<endl;
  cin>>dirs;
  G[cur_pos].emplace_back(X, Y, 0);
  if(dirs & 1) {
    // forward

  } else if((dirs << 1) & 1) {
    // right
  } else if((dirs << 2) & 1) {
    // back 
  } else if((dirs << 3) & 1) {
    // left
  }
  
  return 0;
}
