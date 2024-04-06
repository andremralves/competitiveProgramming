/**
 *    author: mralves 
 *    created: 06-01-2024 11:34:26       
**/
#include <bits/stdc++.h>

#define pb(x) push_back(x)
#define all(x) x.begin(),x.end()

using namespace std;
using ll = long long;
using pii = pair<int, int>;

ll ceil(ll a, ll b) {return a % b == 0 ? a / b : a / b + 1;}
vector<pii> dir4 = {{1, 0}, {0, 1}, {-1, 0}, {0, -1}};
vector<pii> dir8 = {{1, 0}, {1, 1}, {0, 1}, {-1, 1}, {-1, 0}, {-1, -1}, {0, -1}, {1, -1}};

const int MAXN = 200005;
int nxt[MAXN], pre[MAXN], a[MAXN];

void solve() {
  int N; cin>>N;
  for(int i=0; i<N; i++) {
    cin>>a[i];
    nxt[i] = i+1;
    pre[i] = i-1;
  }

  vector<int> order(N);
  iota(order.begin(), order.end(), 0);
  sort(order.begin(), order.end(), [&](int i, int j) {
      return a[i]>a[j];
      });

  bool ok = true;
  for(int i:order) {
    //cout<<i<<" ";
    //cout<<pre[i]<<" "<<nxt[i]<<"\n";
    bool nice = false;
    if(pre[i] >= 0 and a[pre[i]]+1 == a[i]) {
      nice = true; 
    } 
    else if(nxt[i] < N and a[nxt[i]]+1 == a[i]) {
      nice = true;
    } else {
      if(a[i] == 0 and order.back() == i) nice = true;
      if(pre[i] >=0 and a[i] == a[pre[i]] and a[i] != 0) nice = true;
      if(nxt[i] < N and a[i] == a[nxt[i]] and a[i] != 0) nice = true;
    }

    if(!nice) {
      ok = false;
      break;
    }

    if(nxt[i] < N)
      pre[nxt[i]] = pre[i];
    if(pre[i] >= 0)
      nxt[pre[i]] = nxt[i];
  }

  cout<<(ok?"YES\n":"NO\n");
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
