/**
 *    author: mralves 
 *    created: 05-01-2024 11:14:20       
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
  int N; cin>>N;
  vector<int> a(N);
  for(int i=0; i<N; i++) cin>>a[i];

  int p = 0;
  while((1<<(p+1))<=N) p++;

  while(p>=0) {
    for(int i=0; i<(1<<p); i++) {
      a[i] -= 1000;
    }
    p--;
  }
  if(is_sorted(all(a))) {
    cout<<"YES\n";
  } else {
    cout<<"NO\n";
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
