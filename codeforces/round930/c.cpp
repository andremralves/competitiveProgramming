/**
 *    author: mralves 
 *    created: 29-02-2024 11:33:58       
**/
#include <bits/stdc++.h>

#define all(x) x.begin(),x.end()

// less is more
using namespace std;
using ll = long long;

vector<int> p = {9, 8, 7, 1, 2, 3, 0, 4, 5, 6};

int ask(int a, int b, int c, int d) {
  cout<<"? "<<a<<" "<<b<<" "<<c<<" "<<d<<endl;
  char ch; cin>>ch;
  if(ch == '<') {
    return -1;
  } else if(ch == '=') {
    return 0;
  } else {
    return 1;
  }
}

void ans(int a, int b) {
  cout<<"! "<<a<<" "<<b<<endl;
}

void solve() {
  int N; cin>>N;

  int big = 0;
  for(int i=1; i<N; i++) {
    int res = ask(big, big, i, i);
    if(res < 0) big = i;
  }

  int j = 0;
  vector<int> opts;
  for(int i=0; i<N; i++) {
    int res = ask(big, j, big, i);
    if(res < 0) {
      opts.clear();
      opts.push_back(i);
      j = i;
    } else if(res == 0) {
      opts.push_back(i);
    }
  }

  int small = opts[0];
  for(int i=1; i<(int)opts.size(); i++) {
    int res = ask(small, small, opts[i], opts[i]);
    if(res > 0) small = opts[i];
  }
  ans(big, small);
}

int main () {
  //std::ios::sync_with_stdio(false);
  //std::cin.tie(nullptr);

  int t = 1;
  cin>>t;
  while (t--) solve();
  return 0;
}
