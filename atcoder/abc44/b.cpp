#include <bits/stdc++.h>

using namespace std;

int main() {
  string s; cin>>s;
  vector<int> hist(26);
  for(auto c:s) {
    hist[c-'a']++;
  }
  bool ok = true;
  for(auto x:hist) {
    if(x&1) ok = false;
  }
  cout<<(ok?"Yes":"No")<<"\n";
  return 0;
}

