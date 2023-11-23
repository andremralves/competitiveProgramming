#include <bits/stdc++.h>
using namespace std;

int main() {
  double a;
  cout<<setprecision(4)<<fixed;
  vector<double> ans;
  while(cin>>a) {
    ans.push_back(sqrt(a));
  }
  reverse(ans.begin(), ans.end());
  for(auto x:ans) {
    cout<<x<<"\n";
  }
  return 0;
}
