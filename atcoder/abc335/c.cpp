/**
 *    author: mralves 
 *    created: 06-01-2024 08:57:59       
**/
#include <bits/stdc++.h>

#define pb(x) push_back(x)
#define all(x) x.begin(),x.end()

using namespace std;
using ll = long long;
using pii = pair<int, int>;

ll ceil(ll a, ll b) {return a % b == 0 ? a / b : a / b + 1;}
vector<pii> dir4 = {{1, 0}, {0, 1}, {-1, 0}, {0, -1}};
vector<pii> dir8 = {{1, 0}, {1, 1}, {0, 1}, {-1, 1}, {-1, 0}, {-1, -1}, {0, -1}, {1, -1}};

void solve() {
  int N, Q; cin>>N>>Q;

  vector<pii> pos(N);

  for(int i=0; i<N; i++) {
    pos[i] = {i+1, 0};
  }

  int head = 0;

  while(Q--) {
    int q;
    cin>>q;
    if(q == 1) {
      char x;
      cin>>x;
      auto [a, b] = pos[head];
      head--;
      if(head < 0) head = N-1;
      if(x == 'R') {
        pos[head] = {a+1, b};
      } else if(x == 'L') {
        pos[head] = {a-1, b};
      } else if(x == 'U') {
        pos[head] = {a, b+1};
      } else {
        pos[head] = {a, b-1};
      }
    } else {
      int x; cin>>x;
      x--;
      auto [a, b] = pos[(head+x)%N];
      cout<<a<<" "<<b<<"\n";
    }
    //for(auto [a, b]: pos) {
    //  cout<<a<<","<<b<<" ";
    //}
    //cout<<"\n";
  }
}

int main ()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int t = 1;
    while (t--) solve();
    return 0;
}
