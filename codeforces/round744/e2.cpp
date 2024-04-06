
/**
 *    author: mralves 
 *    created: 31-01-2024 04:09:39       
**/
#include <bits/stdc++.h>

#define all(x) x.begin(),x.end()

// less is more
using namespace std;
using ll = long long;

const int MAXN = 200005;
int BIT[MAXN], N;
void update(int i, int v) {
  for(++i;i<=N;i+=(i&-i)) {
    BIT[i] += v;
  }
}
int query(int i) {
  int res = 0;
  for(++i; i>=1; i-=(i&-i)) {
    res += BIT[i];
  }
  return res;
}


void solve() {
  cin>>N;
  vector<int> a(N);
  deque<int> dq;
  for(int i=0; i<N; i++) {
    cin>>a[i];
  }
  vector<int> tmp = a;
  sort(tmp.begin(), tmp.end());
  int sz = unique(tmp.begin(), tmp.end())-tmp.begin();
  map<int, int> mp;
  for(int i=0; i<sz; i++) {
    mp[tmp[i]] = i;
  }
  for(int i=0; i<N; i++) {
    a[i] = mp[a[i]];
  }
  dq.emplace_back(a[0]);
  update(a[0], 1);
  ll ans = 0;
  for(int i=1; i<N; i++) {
    int l = query(N-1)-query(a[i]);
    int r = query(a[i]-1);
    if(l < r) {
      dq.emplace_front(a[i]);
      ans += l;
    } else {
      dq.emplace_back(a[i]);
      ans += r;
    }
    update(a[i], 1);
  }
  cout<<ans<<"\n";
  for(int i=0; i<=N; i++) {
    BIT[i] = 0;
  }
}

int main () {
  std::ios::sync_with_stdio(false);
  std::cin.tie(nullptr);

  int t = 1;
  cin>>t;
  while (t--) solve();
  return 0;
}
