/**
 *    author: mralves 
 *    created: 30-11-2023 13:33:01       
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
  for(int i=0; i<N; i++) {
    cin>>a[i];
  }

  if(is_sorted(all(a))) {
    cout<<"YES\n";
  } else {
    if(K < 2) {
    cout<<"NO\n";
    } else {
      cout<<"YES\n";
    }
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
