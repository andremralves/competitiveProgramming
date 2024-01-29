#include <bits/stdc++.h>
using namespace std;

using ll = long long;

const int MAGIC = 320;
void solve() {
  int N, Q; cin>>N>>Q;
  vector<int> a(N);
  for(int i=0; i<N; i++) {
    cin>>a[i];
  }
  vector<ll> ans(Q);
  vector<vector<array<int, 3>>> operations(MAGIC);
  for(int q=0; q<Q; q++) {
    int s, d, k;
    cin>>s>>d>>k;
    if(d >= MAGIC) {
      for(int i=0; i<k; i++) {
        ans[q] += 1ll*a[s+d*i-1]*(i+1);
      }
    } else {
      operations[d].push_back({q, s, k});
    }
  }

  for(int d=1; d<MAGIC; d++) {
    auto op = operations[d];
    if(op.empty()) continue;

    vector<ll> psum(N), psum2(N);
    for(int i=0; i<N; i++) {
      if(i >= d) {
        psum[i] = psum[i-d];
        psum2[i] = psum2[i-d];
      }
      psum[i] += a[i];
      psum2[i] += 1ll*a[i]*(i/d+1);
    }

    for(auto arr: op) {
      int k = arr[2], s = arr[1], q = arr[0];
      ans[q] = psum2[s+d*(k-1)-1];
      if(s > d) {
        ans[q] -= psum2[s-d-1];
      }
      ll sub = psum[s+d*(k-1)-1];
      if(s > d) sub -= psum[s-d-1];
      //cout<<ans[q]<<" "<<sub<<"\n";
      //cout<<(s/d)<<"\n";
      ans[q] -= sub*((s-1)/d);
    }
  }

  for(auto x:ans) {
    cout<<x<<" ";
  }
  cout<<"\n";
}

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  int t; cin>>t;
  while(t--) solve();
  return 0;
}
