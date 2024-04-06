/**
 *    author: mralves 
 *    created: 30-12-2023 11:46:49       
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
  int N, K; cin>>N>>K;

  vector<int> b(N);
  ll m = 1;
  for(int i=0; i<N; i++) {
    cin>>b[i];
    m*=b[i];
  }
  if(2023%m) {
    cout<<"NO\n";
  } else {
    cout<<"YES\n";
    cout<<2023/m<<" ";
    for(int i=0; i<K-1; i++) {
    cout<<1<<" ";
    }
    cout<<"\n";
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
