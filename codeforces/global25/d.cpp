#include <bits/stdc++.h>

#define all(x) x.begin(),x.end()

// less is more
using namespace std;
using ll = long long;

const ll INF = 1e18;
void print_ans(vector<ll> ans) {
  cout<<"YES\n";
  cout<<ans.size()<<"\n";
  for(auto x:ans) cout<<x<<" ";
  cout<<"\n";
}
void solve() {
  ll N, K;
  cin>>N>>K;

  if(N == K) {
    cout<<"YES\n";
    cout<<1<<"\n";
    cout<<1<<"\n";
  } else {
    vector<ll> ans;
    if(K*2 > N+1) {
      cout<<"NO\n";
    } else {
      print_ans(vector<ll>{N-K+1, 1});
    }

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
