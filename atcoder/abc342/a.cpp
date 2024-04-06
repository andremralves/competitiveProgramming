#include <bits/stdc++.h>
using namespace std;

int main() {
  string s; cin>>s;
  for(int i=0; i<26; i++) {
    if(count(s.begin(), s.end(), 'a'+i) == 1) {
      cout<<1+s.find('a'+i)<<"\n";
      break;
    }
  }
  return 0;
}
