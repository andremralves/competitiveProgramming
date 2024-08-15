#include <bits/stdc++.h>

#define all(x) x.begin(),x.end()

// less is more
using namespace std;
using ll = long long;


const int MAXN = 200005;
int BIT[MAXN], N;
void update(int i, int v) {
  for(++i;i<=N;i+=i&-i) {
    BIT[i] += v;
  }
}
int query(int i) {
  int res = 0;
  for(++i; i>=1; i-=i&-i) {
    res += BIT[i];
  }
  return res;
}


void solve() {
  cin>>N;
  vector<int> a(N), b(N);
  for(int i=0; i<N; i++) {
    cin>>a[i];
  }
  for(int i=0; i<N; i++) {
    cin>>b[i];
    b[i]--;
  }
  vector<int> sorted = a;
  sort(sorted.begin(), sorted.end());
  map<ll, int> comp;
  int id = 0;
  for(int i=0; i<N; i++) {
    if(comp[sorted[i]] == 0) {
      comp[sorted[i]] = id++;
    }
  }
  ll ans = 0, cnt = 0;
  int cur = N-1;
  for(int i=0; i<(N+1)/2; i++) {
    //cout<<"cur:"<<sorted[cur]<<"\n";
    //cout<<"-"<<cur<<" "<<query(comp[sorted[cur]])<<"\n";
    int x = cur - (query(N-1)-query(comp[sorted[cur]]-1));
    if(1ll*sorted[x]*(i+1) > ans) {
      ans = 1ll*sorted[x]*(i+1);
      cnt = (i+1);
    }
    //cout<<"comp:"<<comp[a[b[i]]]<<"\n";
    update(comp[a[b[i]]], 1);
    cur--;
  }
  cout<<ans<<" "<<cnt<<"\n";
  for(int i=0; i<=N; i++) BIT[i] = 0;
}

int main () {
  std::ios::sync_with_stdio(false);
  std::cin.tie(nullptr);

  int t = 1;
  cin>>t;
  while (t--) solve();
  return 0;
}
