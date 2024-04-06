#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
  int Q;
  cin>>Q;
  multiset<ll> mset;
  while(Q--) {
    ll q, x, k;
    cin>>q>>x;
    if(q == 1) {
      mset.insert(x);
    } else if(q == 2) {
      cin>>k;
      auto it = make_reverse_iterator(mset.upper_bound(x));
      auto end = make_reverse_iterator(mset.begin());
      k--;
      for(; it != end and k; it++, k--);
      if(it == mset.rend()) {
        cout<<"-1\n";
      } else {
        cout<<*it<<"\n";
      }
    } else {
      cin>>k;
      auto it = mset.lower_bound(x);
      k--;
      for(; it != mset.end() and k; it++, k--);
      if(it == mset.end()) {
        cout<<"-1\n";
      } else {
        cout<<*it<<"\n";
      }
    }
  }
  return 0;
}
