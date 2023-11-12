/**
 *    author: mralves 
 *    created: 11-11-2023 08:58:27       
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
  int N, Q;
  cin>>N>>Q;
  string s;
  cin>>s;

  vector<int> psum(N);
  for(int i=1; i<N; i++) {
    if(s[i] == s[i-1]) {
      psum[i] = psum[i-1]+1;
    } else {
      psum[i] = psum[i-1];
    }
  }

  while(Q--) {
    int l, r;
    cin>>l>>r;
    cout<<psum[r-1]-psum[l-1]<<"\n";
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
