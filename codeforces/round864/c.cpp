/**
 *    author: mralves 
 *    created: 26-01-2024 00:17:47       
**/
#include <bits/stdc++.h>

#define all(x) x.begin(),x.end()

// less is more
using namespace std;
using ll = long long;

void solve() {
  int N, M; cin>>N>>M;
  int dis, dis2;

  cout<<"? 1 1"<<endl;
  cin>>dis;
  cout<<"? "<<min(dis+1, N)<<" 1"<<endl;
  cin>>dis2;
  if(dis == dis2) {
    //cout<<"dis2:"<<dis2<<"\n";
    cout<<"? 1 "<<min(M, dis2+1)<<endl;
    cin>>dis;
    cout<<"! "<<dis+1<<" "<<dis2+1<<endl;
  } else {
    cout<<"! "<<dis+1<<" "<<dis2+1<<endl;
  }
}

int main () {
  std::ios::sync_with_stdio(false);
  std::cin.tie(nullptr);

  int t = 1;
  cin>>t;
  while (t--) solve();
  return 0;
}
