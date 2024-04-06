#include <bits/stdc++.h>
using namespace std;
using ll = long long;

vector<ll> factorize(ll N) {
  vector<ll> fact;
  for(ll i=2; i*i<=N; i++) {
    if(N%i == 0) fact.push_back(i);
    while(N%i==0) {
      N /= i;
    }
  }
  if(N > 1)
    fact.push_back(N);
  return fact;
}

ll N, notone;
void recursion(vector<ll> &f, vector<ll> &sub, int i, ll mult) {
  if(sub.size() > 0)
    mult *= sub.back();
  if(sub.size() > 0) {
    //cout<<N<<" "<<mult<<"> ";
    //cout<<N/mult<<"\n";
    if(sub.size() & 1) {
      notone += N/mult;
    } else {
      notone -= N/mult;
    }
  }
  for(; i<(int)f.size(); i++) {
    sub.push_back(f[i]);
    recursion(f, sub, i+1, mult);
    sub.pop_back();
  }
}

int main() {
  std::ios::sync_with_stdio(false);
  std::cin.tie(nullptr);
  while(cin>>N) {
    notone = 0;
    vector<ll> f;
    f = factorize(N);
    vector<ll> sub;
    recursion(f, sub, 0, 1);
    cout<<(N-notone)/2<<"\n";
  }
  return 0;
}
