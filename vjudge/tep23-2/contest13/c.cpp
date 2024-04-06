/**
 *    author: mralves 
 *    created: 01-12-2023 15:45:19       
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
  int H, W, K;
  cin>>H>>W>>K;

  vector<string> grid(H);
  for(int i=0; i<H; i++) {
    cin>>grid[i];
  }


  int ans = 0;
  for(int x=0; x<=H; x++) {
  for(int y=0; y<=W; y++) {

  vector<int> hperm(H), wperm(W);
  for(int i=H-1; i>=H-x; i--) hperm[i] = 1;
  for(int i=W-1; i>=W-y; i--) wperm[i] = 1;

  do {
  do {
    vector<string> tmp = grid;
    for(int i=0; i<H; i++) {
      for(int j=0; j<W; j++) {
        if(hperm[i] or wperm[j]) {
          tmp[i][j] = '.';
        }
      }
    }
    int cnt = 0;
    for(int i=0; i<H; i++) {
      for(int j=0; j<W; j++) {
        if(tmp[i][j] == '#') {
          cnt++;
        }
      }
    }
    if(cnt == K) ans++;

  } while(next_permutation(all(hperm)));
  } while(next_permutation(all(wperm)));


  }
  }
  cout<<ans<<"\n";

}

int main ()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int t = 1;
    while (t--) solve();
    return 0;
}
