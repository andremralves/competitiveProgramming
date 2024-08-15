#include <bits/stdc++.h>

#define all(x) x.begin(),x.end()

// less is more
using namespace std;
using ll = long long;

void solve() {
  int N, M, K;
  cin>>N>>M>>K;
  vector<int> a(N);
  for(int i=0; i<N; i++) {
    cin>>a[i];
  }
  vector<int> b = a; 
  sort(b.begin(), b.end());
  map<int, int> mp;
  int days = (K+M-1)/M;
  for(int i=0; i<days; i++) {
    mp[b[i]]++;
  }

  vector<int> use;
  for(int i=0; i<N; i++) {
    if(mp[a[i]]) {
      use.push_back(i);
      mp[a[i]]--;
    }
  }

  ll sum = 0;
  ll acc = 0;
  for(auto i:use) {
    sum += 1ll*M*(a[i]+acc);
    acc += M;
  }

  ll ans = sum;
  int qtd = K%M;
  //cout<<ans<<" "<<qtd<<"\n";
  if(qtd) {
    ll take = 0;
    int d = 1;
    for(auto i:use) {
      //cout<<a[i]*(M-qtd)+qtd*(days-d)*(M-qtd)<<" ";
      take =max(take, 1ll*a[i]*(M-qtd)+1ll*M*(days-d)*(M-qtd));
    }
    ans-=take;
  }
  cout<<ans<<"\n";
}

int main () {
  std::ios::sync_with_stdio(false);
  std::cin.tie(nullptr);

  int t = 1;
  cin>>t;
  while (t--) solve();
  return 0;
}
