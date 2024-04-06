#include <bits/stdc++.h>
using namespace std;

int main() {
  int Q; cin>>Q;
  vector<int> a;
  while(Q--) {
    int t, x;
    cin>>t>>x;
    if(t == 1) {
      a.push_back(x);
    } else {
      cout<<a[a.size()-x]<<"\n";
    }
  }
  return 0;
}
