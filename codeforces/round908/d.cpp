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
  int N, M;
  cin>>N>>M;

  vector<int> a(N);
  for(int i=0; i<N; i++) {
    cin>>a[i];
  }
  priority_queue<int> pq;
  for(int i=0; i<M; i++) {
    int x; cin>>x;
    pq.push(x);
  }

  for(int i=0; i<N; i++) {
    while(!pq.empty()) {
      int cur = pq.top();
      if(cur < a[i]) break;
      pq.pop();
      cout<<cur<<" ";
    }
    cout<<a[i]<<" ";
  }
  while(!pq.empty()) {
    cout<<pq.top()<<" ";
    pq.pop();
  }
  cout<<"\n";
}

int main ()
{
    //std::ios::sync_with_stdio(false);
    //std::cin.tie(nullptr);

    int t = 1;
    cin>>t;
    while (t--) solve();
    return 0;
}
