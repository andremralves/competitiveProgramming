/**
 *    author: mralves 
 *    created: 02-01-2024 15:06:48       
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
  vector<int> a(N);
  for(int i=0 ;i<N ;i++) {
    cin>>a[i];
  }

  int cnt = 0;
  int find = a[0];
  bool ok = false;
  for(int i=0; i<N; i++) {
    if(find == a[i]) {
      cnt++;
    }
    if(cnt == K) {
      find = a[N-1];
      if(a[0] == a[N-1]) ok = true;
    }
    if(cnt == 2*K) ok = true;
  }
  cout<<(ok?"YES\n":"NO\n");
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
