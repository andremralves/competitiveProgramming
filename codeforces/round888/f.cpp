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

  vector<int> a(N), p(N);
  for(int i=0; i<N; i++) {
    cin>>a[i];
  }

  iota(all(p), 0);
  sort(all(p), [&](const int i, const int j) {
      return a[i]<a[j];
      });

  int min_xor = (1<<K);
  int x, y;
  for(int i=1; i<N; i++) {
    if((a[p[i]]^a[p[i-1]]) < min_xor) {
      x = p[i];
      y = p[i-1];
      min_xor = a[p[i]]^a[p[i-1]];
    }
  }
  cout<<x+1<<" "<<y+1<<" "<<(((1<<K)-1)^a[y])<<"\n";
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
