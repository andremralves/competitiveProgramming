/**
 *    author: mralves 
 *    created: 25-11-2022 22:11:10       
**/
#include <bits/stdc++.h>

using namespace std;
using ll = int64_t;

void solve() {
  int N, X;
  cin>>N>>X;
  if(X != 1 and N%X == 0) {
    vector<int> divs;
    for(int i=1; i*i<=N; i++) {
      if(N%i==0) {
        if(i%X == 0) divs.push_back(i);
        if(N/i != i and (N/i)%X==0) divs.push_back(N/i);
      }
    }
    sort(divs.begin(), divs.end());
    for(auto d:divs) {
      cout<<d<<" ";
    }
    cout<<"\n";
    int cur = 1;
    cout<<X<<" ";
    for(int i=2; i<N; i++) {
      if(find(divs.begin(), divs.end(), i) != divs.end()) {
        if(divs[cur]%i == 0)
          cout<<divs[cur]<<" ";
        else
          cout<<i<<" ";
        cur++;
      }
      else cout<<i<<" ";
    }
    cout<<"1\n";
  } else {
    cout<<"-1\n";
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
