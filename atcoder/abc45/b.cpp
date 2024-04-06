#include <bits/stdc++.h>
using namespace std;

int main() {
  string s[3];
  cin>>s[0]>>s[1]>>s[2];
  int cur = 0;
  string ans = "ABC";
  while(1) {
    if(s[cur].size() == 0) {
      cout<<ans[cur]<<"\n";
      break;
    }
    int next = s[cur][0]-'a';
    s[cur].erase(0, 1);
    cur = next;
  }
  return 0;
}
