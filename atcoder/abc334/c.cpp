/**
 *    author: mralves 
 *    created: 23-12-2023 16:53:36       
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
  vector<int> miss(N+1);
  for(int i=0; i<K; i++) {
    int x; cin>>x;
    miss[x] = 1;
  }

  if(K%2) {
    bool has = 0;
    for(int i=2; i<=N; i++) {
      if(i<N and miss[i] == 1 and miss[i-1] == 0 and miss[i+1] == 0) {
        miss[i] = 0;
        has = 1;
        break;
      }
    }
    if(!has) {
      *find(all(miss), 1) = 0;
    }
  }

  deque<int> dq;
  for(int i=1; i<=N; i++) {
    dq.emplace_back(i);
    if(!miss[i])
      dq.emplace_back(i);
  }

  int ans = 0;
  while(dq.size() > 0) {
    //cout<<dq[1]<<" "<<dq[0]<<"\n";
    ans += dq[1]-dq[0];
    dq.pop_front();
    dq.pop_front();
  }
  cout<<ans<<"\n";
}

int main ()
{
    //std::ios::sync_with_stdio(false);
    //std::cin.tie(nullptr);

    int t = 1;
    while (t--) solve();
    return 0;
}
