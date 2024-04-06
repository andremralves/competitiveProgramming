/**
 *    author: mralves 
 *    created: 19-11-2022 19:55:26       
**/
#include <bits/stdc++.h>

using namespace std;
using ll = int64_t;

void solve() {
  string s;
  cin>>s;
  string t;
  for(int i=0; i<20; i++) {
    t+="Yes";
  }
  if(t.find(s) == string::npos) {
    cout<<"NO\n";
  } else {
    cout<<"YES\n";
  }

}

int main (int argc, char *argv[])
{
    int t;
    cin>>t;
    while (t--)
    {
        solve();    
    }
    return 0;
}
