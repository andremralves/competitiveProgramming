/**
 *    author: mralves 
 *    created: 10-11-2023 16:06:06       
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
  int N;
  cin>>N;
  int sz = pow(2, N);
  vector<pii> a(sz);
  for(int i=0; i<sz; i++) {
    int x; cin>>x;
    a[i] = {x, i+1};
  }

  while((int)a.size() > 2) {
    vector<pii> buf;
    for(int i=1; i<(int)a.size(); i+=2) {
      buf.push_back(max(a[i], a[i-1]));
    }
    a = buf;
  }
  cout<<min_element(all(a))->second<<"\n";
}

int main ()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int t = 1;
    while (t--) solve();
    return 0;
}
