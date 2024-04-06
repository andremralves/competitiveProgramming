/**
 *    author: mralves 
 *    created: 23-02-2024 11:35:46       
**/
#include <bits/stdc++.h>

#define all(x) x.begin(),x.end()

// less is more
using namespace std;
using ll = long long;

vector<int> a;
vector<ll> psum, rsum;
vector<pair<int, int>> bad;
int N;

bool check_invterval(int l, int r) {
  if(l == r) return true;
  auto it = upper_bound(bad.begin(), bad.end(), make_pair(r, 0));
  if(it == bad.begin()) return true;
  it--;
  auto [badl, badr] = *it;
  bool ok = true;
  //cout<<"check\n";
  //cout<<badl<<" "<<badr<<"\n";
  //cout<<l<<" "<<r<<"\n";
  //cout<<"check end\n";
  if(l >= badl and r <= badr) ok = false;
  return ok;
}

int search1(int l, int r, int x) {
  if(r>=0 and a[r]>a[r+1]) return r;
  int right = r;
  l--, r++;
  while(r-l>1) {
    int m = l+(r-l)/2;
    ll sum = rsum[m]-rsum[right+1];
    bool ok = check_invterval(m, right);
    if(sum <= x or !ok) {
      r = m;
    } else {
      l = m;
    }
  }
  return l;
}
int search2(int l, int r, int x) {
  if(l<N and a[l]>a[l-1]) return l;
  int left = l;
  l--, r++;
  while(r-l>1) {
    int m = l+(r-l)/2;
    ll sum = psum[m+1]-psum[left];
    if(sum <= x or !check_invterval(left, m)) {
      l = m;
    } else {
      r = m;
    }
  }
  return r;
}

const int INF = 1e9;
void solve() {
  cin>>N;
  a.assign(N, 0);
  for(int i=0; i<N; i++) cin>>a[i];
  bad.clear();
  for(int i=0; i<N; i++) {
    int j = i;
    while(j<N and a[j] == a[i]) j++;
    bad.emplace_back(i, j-1);
    i = j-1;
  }
  psum.assign(N+1, 0);
  rsum.assign(N+1, 0);
  for(int i=1; i<=N; i++) {
    psum[i] = psum[i-1]+a[i-1];
    rsum[N-i] = rsum[N-i+1]+a[N-i];
  }

  //for(auto [l, r]:bad) {
  //  cout<<l<<":"<<r<<" ";
  //}
  //cout<<"\n";

  //for(auto x:rsum) cout<<x<<" ";
  //cout<<"\n";

  for(int i=0; i<N; i++) {
    int side1 = search1(0, i-1, a[i]);
    int side2 = search2(i+1, N-1, a[i]);
    int x, y;
    x = i-side1; y = side2-i;
    if(side1 == -1) x = INF;
    if(side2 == N) y = INF;
    int ans = min(x, y);
    if(ans == INF) ans = -1;
    cout<<ans<<" ";
  }
  cout<<"\n";
}

int main () {
  std::ios::sync_with_stdio(false);
  std::cin.tie(nullptr);

  int t = 1;
  cin>>t;
  while (t--) solve();
  return 0;
}
