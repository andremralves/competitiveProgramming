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
  vector<ll> primes;
  for(int i=2; i*i<=N; i++) {
    while(N%i==0) {
      N/=i;
      primes.push_back(i);
    }
  }
  if(N > 1) {
    primes.push_back(N);
  }
  return primes;
}

void solve() {
  ll P;
  cin>>P;
  vector<ll> primes = fact(P);
  int sum = accumulate(all(primes), 0);
  if(sum > 41) {
    cout<<"-1\n";
  } else {
    while(sum < 41) {
      primes.push_back(1);
      sum++;
    }
    cout<<primes.size()<<" ";
    for(auto x: primes) {
      cout<<x<<" ";
    }
    cout<<"\n";
  }
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

