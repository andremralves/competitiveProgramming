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
  int N, K;
  cin>>N>>K;

  vector<int> b(N);
  for(int i=0; i<N; i++) {
    cin>>b[i];
  }

  vector<char> used(N);
  int cur = N-1;
  bool ok = false;
  int cnt = 0;
  while(true) {
    cnt++;
    if(cnt > K or used[cur] == 1) {
      ok = true;
      break;
    }
    used[cur] = 1;
    if(b[cur] > N) break;
    cur = (cur - b[cur])%N;
    if(cur < 0) cur += N;
  }

  cout<<(ok?"Yes\n":"No\n");

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
