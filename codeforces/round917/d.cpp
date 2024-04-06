/**
 *    author: mralves 
 *    created: 24-12-2023 11:22:50       
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

const int MAXN = 1e6+10;
int BIT[MANX];
int N, K;
int query(int i) {
  int res = 0;
  for(++i; i>0; i-=i&-i) {
    res += BIT[i];
  }
  return res;
}
void update(int i, int v) {
  for(i++; i<=N*2; i+=i&-i) {
    BIT[i] += v;
  }
}

void solve() {
  cin>>N>>K;
  // clear bit
  for(int i=0; i<MAXN; i++) BIT[i] = 0;

  vector<int> p(N), q(K), qcnt(K);
  for(int i=0; i<N; i++) cin>>p[i];
  for(int i=0; i<K; i++) {
    cin>>q[i];
    qcnt[q[i]]++;
  }

  for(int i=0; i<N; i++) {
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
