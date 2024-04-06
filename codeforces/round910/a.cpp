/**
 *    author: mralves 
 *    created: 19-11-2023 11:33:54       
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
  int N, K;
  cin>>N>>K;
  string s;
  cin>>s;
  int bs = count(all(s), 'B');
  int ans = 0;
  if(bs < K) {
    int li = 0;
    for(int i=0; i<N; i++) {
      if(bs < K and s[i] == 'A') {
        li = i+1;
        bs++;
      }
    }
    cout<<1<<"\n";
    cout<<li<<" B\n";
  } else if(bs > K){
    int li = 0;
    for(int i=0; i<N; i++) {
      if(bs > K and s[i] == 'B') {
        li = i+1;
        bs--;
      }
    }
    cout<<1<<"\n";
    cout<<li<<" A\n";
  } else {
    cout<<ans<<"\n";
  }
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
