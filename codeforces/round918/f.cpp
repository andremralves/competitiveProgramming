/**
 *    author: mralves 
 *    created: 28-12-2023 11:35:40       
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

const int MAXN = 1e6+5;
int BIT[MAXN];
int N;

// BIT needs to be 1 indexed
// update
void update(int i, int v) {
  // I will receive 0 indexed
  i++;
  for(; i<=N; i+=(i&-i)) {
    BIT[i] += v;
  }
}

// get
int get(int i) {
  i++;
  int res = 0;
  for(; i>0; i-=(i&-i)) {
    res += BIT[i];
  }
  return res;
}

void solve() {
  memset(BIT, 0, sizeof(BIT));
  cin>>N;
  vector<pii> ps(N);
  for(int i=0; i<N; i++) {
    int x, y;
    cin>>x>>y;
    ps[i] = {x, y};
  }
  sort(all(ps));
  vector<int> b(N);
  for(int i=0; i<N; i++) {
    b[i] = ps[i].second;
  }
  sort(all(b));
  map<int, int> cmpb;
  for(int i=0; i<N; i++) {
    cmpb[b[i]] = i;
  }

  ll ans = 0;
  for(int i=0; i<N; i++) {
    auto [x, y] = ps[i];
    ans += get(N-1)-get(cmpb[y]);
    update(cmpb[y], 1);
  }
  cout<<ans<<"\n";
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
