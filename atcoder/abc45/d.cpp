#include <bits/stdc++.h>
using namespace std;


set<pair<int, int>> spots;
int count(int a, int b) {
  int cnt = 0;
  for(int i=a; i<a+3; i++) {
    for(int j=b; j<b+3; j++) {
      if(spots.count(make_pair(i, j)) == 1)
        cnt++;
    }
  }
  return cnt;
}

// 0 1 2 3
// 4 5 6 7
// 8 9 10 11

int main() {
  int H, W, N;
  cin>>H>>W>>N;

  for(int i=0; i<N; i++) {
    int a, b;
    cin>>a>>b;
    a--, b--;
    spots.emplace(a, b);
  }

  map<pair<int, int>, int> counts;
  for(auto [a, b]: spots) {
    for(int i=a-2; i<a+3; i++) {
      for(int j=b-2; j<b+3; j++) {
        int cnt = count(i, j);
        if(cnt > 0)
          counts[make_pair(i, j)] = cnt;
      }
    }
  }

  long long zero = 1LL*(H-2)*(W-2);
  for(auto [x, y]: counts) {
    auto [a, b] = x;
    if(a+2>=H or b+2>=W) continue;
    if(a<0 or b<0) continue;
    zero--;
  }
  cout<<zero<<"\n";
  for(int i=1; i<10; i++) {
    int cnt = 0;
    for(auto [x, y]: counts) {
      auto [a, b] = x;
      if(a+2>=H or b+2>=W) continue;
      if(a<0 or b<0) continue;
      if(y == i) {
        //cout<<a<<" "<<b<<"\n";
        cnt++;
      }
    }
    cout<<cnt<<"\n";
  }
  return 0;
}
