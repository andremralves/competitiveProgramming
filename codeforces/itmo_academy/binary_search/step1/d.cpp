#include <bits/stdc++.h>
using namespace std;
int main() {
  int N, K; cin>>N;
  vector<int> a(N);
  for(auto &x:a) cin>>x;
  ranges::sort(a);
  cin>>K;
  while(K--) {
    int l, r;
    cin>>l>>r;
    auto greater1 = [&](int i) {
      return a[i] < l;
    };
    auto greater2 = [&](int i) {
      return a[i] <= r;
    };
    const auto lo =ranges::partition_point(ranges::views::iota(0, N), greater1);
    const auto hi =ranges::partition_point(ranges::views::iota(0, N), greater2);
    cout<<hi-lo<<" ";
  }
  cout<<"\n";
  return 0;
}
