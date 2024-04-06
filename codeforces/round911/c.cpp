/**
 *    author: mralves 
 *    created: 26-11-2023 15:39:26       
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
int INF = 1e7;

void solve() {
  int N; cin>>N;
  string s; cin>>s;

  vector<int> ps(N+1);
  vector<int> leafs;
  vector<char> dir(N+1);
  for(int i=1; i<=N; i++) {
    int l, r;
    cin>>l>>r;
    if(l == 0 and r == 0) {
      leafs.push_back(i);
    }
    ps[l] = i;
    ps[r] = i;
    dir[l] = 'L';
    dir[r] = 'R';
  }

  vector<int> memo(N+1, INF);
  for(auto v: leafs) {
    int prev = v;
    v = ps[v];
    int cnt = 0;
    while(v != 0) {
      //cout<<v<<" ";
      if(s[v-1] != dir[prev]) {
        cnt++;
      }
      if(cnt >= memo[v]) break;
      memo[v] = cnt;
      prev = v;
      v = ps[v];
    }
    //cout<<"\n";
  }
  cout<<memo[1]<<"\n";

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

