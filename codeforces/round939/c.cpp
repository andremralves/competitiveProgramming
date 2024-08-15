#include <bits/stdc++.h>

#define all(x) x.begin(),x.end()

// less is more
using namespace std;
using ll = long long;

void print_perm(int N) {
  for(int i=1; i<=N; i++) {
    cout<<i<<" ";
  }
}
void print_inv(int N) {
  for(int i=N; i>=1; i--) {
    cout<<i<<" ";
  }
}

void solve() {
  int N; cin>>N;
  int sum = 0;
  int qtd = 2*N-1;
  for(int i=N; i>=1; i--) {
    sum += qtd*i;
    qtd-=2;
  } 
  vector<pair<int, int>> ans;
  for(int i=1; i<=N; i++) {
    ans.push_back({1, i});
    ans.push_back({2, N-i+1});
  }
  cout<<sum<<" ";
  cout<<ans.size()<<"\n";
  for(auto [op, i]:ans) {
    cout<<op<<" "<<i<<" ";
    if(op == 1)
      print_perm(N);
    else
      print_inv(N);
    cout<<"\n";
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
