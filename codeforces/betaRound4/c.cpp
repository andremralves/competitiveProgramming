#include <bits/stdc++.h>
using namespace std;

int main() {
  int N; cin>>N;
  map<string, int> mp;
  while(N--) {
    string s; cin>>s;
    mp[s]++;
    if(mp[s] == 1)
      cout<<"OK\n";
    else
      cout<<s<<mp[s]-1<<"\n";
  }
  return 0;
}
