#include <bits/stdc++.h>
using namespace std;

int main() {
  int N, Q;
  cin>>N>>Q;
  vector<pair<int, int>> a(N);
  for(int i=0; i<N; i++) {
    int x; cin>>x;
    a[i] = make_pair(x, i+1);
  }
  sort(a.begin(), a.end());
  while(Q--) {
    int x, k;
    cin>>x>>k;
    int pos = (lower_bound(a.begin(), a.end(), make_pair(x, 0))+k-1)-a.begin();
    if(pos >= N or a[pos].first != x) {
      cout<<"-1\n";
    } else {
      cout<<a[pos].second<<"\n";
    }
  }
  return 0;
}
