/**
 *    author: mralves 
 *    created: 07-11-2023 11:34:29       
**/
#include <bits/stdc++.h>

#define pb(x) push_back(x)
#define all(x) x.begin(),x.end()

using namespace std;
using ll = int64_t;
using pii = pair<int, int>;

ll ceil(ll a, ll b) {return a % b == 0 ? a / b : a / b + 1;}
vector<pii> dir4 = {{1, 0}, {0, 1}, {-1, 0}, {0, -1}};
vector<pii> dir8 = {{1, 0}, {1, 1}, {0, 1}, {-1, 1}, {-1, 0}, {-1, -1}, {0, -1}, {1, -1}};

void solve() {
  int N;
  string s;
  cin>>N>>s;
  vector<char> wins;
  for(int i=1; i<=N; i++) {
    for(int j=1; j<=N; j++) {
      int a = 0, b = 0;
      int wa = 0, wb = 0;
      int k = 0;
      for(; k<N; k++) {
        char c = s[k];
        if(c == 'A')
          a++;
        else
          b++;
        if(a == i) {
          a = 0;
          b = 0;
          wa++;
        }
        if(b == i) {
          a = 0;
          b = 0;
          wb++;
        }
        if(wa == j or wb == j) break;
      }
      if(k == N-1 and wa == j and wb < wa) {
        wins.push_back('A');
      }
      if(k == N-1 and wb == j and wa < wb) {
        wins.push_back('B');
      }
    }
  }
  if(count(all(wins), 'A') and count(all(wins), 'B'))
    cout<<"?\n";
  else if(count(all(wins), 'A'))
    cout<<"A\n";
  else
    cout<<"B\n";
}

int main ()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int t = 1;
    cin>>t;
    while (t--) solve();
    return 0;
}
