/**
 *    author: mralves 
 *    created: 31-01-2024 04:09:39       
**/
#include <bits/stdc++.h>

#define all(x) x.begin(),x.end()

// less is more
using namespace std;
using ll = long long;

const int INF = 1e9+10;
void solve() {
  int N; cin>>N;
  vector<int> a(N);
  for(int i=0; i<N; i++) {
    cin>>a[i];
  }

  vector<array<int, 3>> ops;
  for(int i=0; i<N; i++) {
    int mpos=i, mn = a[i];
    for(int j=i+1; j<N; j++) {
      if(a[j] < mn) {
        mn = a[j];
        mpos = j;
      }
    }
    int d = mpos-i;
    if(d == 0) continue;
    //cout<<"d:"<<d<<"\n";
    //cout<<"mn:"<<mn<<"\n";
    vector<int> tmp = a;
    for(int j=0; j<=d; j++) {
      a[j+i] = tmp[i+(j+d)%(d+1)];
    }
    ops.push_back({i+1, mpos+1, d});
    //cout<<"\n";
    //cout<<"-----\n";
    //for(auto x: a) {
    //  cout<<x<<" ";
    //}
    //cout<<"\n";
  }

  cout<<ops.size()<<"\n";
  for(auto [l, r, d]:ops) {
    cout<<l<<" "<<r<<" "<<d<<"\n";
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
