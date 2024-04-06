/**
 *    author: mralves 
 *    created: 19-11-2022 19:55:26       
**/
#include <bits/stdc++.h>

using namespace std;
using ll = int64_t;

void solve() {
  int l, r, x, a, b;
  cin>>l>>r>>x;
  cin>>a>>b;

  if(a == b) {
    cout<<"0\n";
    return;
  }

  if(abs(a-b) >= x) {
    cout<<"1\n";
  } else {
    int mn = 4;
    if(abs(a-r) >= x) {
      if(abs(r-b) >= x) {
        mn = min(2, mn);
      } else if(abs(l-b) >= x){
        mn = min(3, mn);
      }
    }

    if(abs(a-l) >= x) {
      if(abs(l-b) >= x) {
        mn = min(2, mn);
      } else if(abs(r-b) >= x){
        mn = min(3, mn);
      }
    }
    if(mn == 4) mn = -1;
    cout<<mn<<"\n";
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
