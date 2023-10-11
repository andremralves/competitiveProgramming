/**
 *    author: mralves 
 *    created: 07-10-2023 14:00:34       
**/
#include <bits/stdc++.h>

#define pb(x) push_back(x)
#define all(x) x.begin(),x.end()

using namespace std;
using ll = int64_t;
using ii = pair<int, int>;

ll ceil(ll a, ll b) {return a % b == 0 ? a / b : a / b + 1;}
vector<ii> dir4 = {{1, 0}, {0, 1}, {-1, 0}, {0, -1}};
vector<ii> dir8 = {{1, 0}, {1, 1}, {0, 1}, {-1, 1}, {-1, 0}, {-1, -1}, {0, -1}, {1, -1}};

vector<ll> fact(ll N) {
  vector<ll> factors;
  if(N != 1)
    factors.push_back(1);
  for(int i=2; i*i<=N; i++) {
    if(N%i==0) {
      factors.push_back(i);
      if(N/i != i)
        factors.push_back(N/i);
    }
  }
  factors.push_back(N);
  return factors;
}

void solve() {
  int N, Q;
  string s;
  cin>>N>>s>>Q;

  map<ll, ll> mp;
  for(int i=0; i<Q; i++) {
    ll q;
    cin>>q;
    mp[q]++;
  }

  ll ans = 0;
  for(int i=0; i<N; i++) {
    vector<ll> f = fact(i+1);
    int inv = 0;
    for(auto x: f) {
      inv+=mp[x];
    }
    //cout<<"inv:"<<inv<<" ";
    if((s[i] == '0' and inv%2) or (s[i] == '1' and inv%2==0)) {
      //q.push_back(i+1);
      //sort(all(q));
      mp[i+1]++;
      ans++;
    }
  }
  cout<<ans<<"\n"; 
}

int main() {
  std::ios::sync_with_stdio(false);
  std::cin.tie(nullptr);
  int t;
  cin>>t;
  for(int i=1; i<=t; i++) {
    cout<<"Case #"<<i<<": ";
    solve();
  }
  return 0;
}


