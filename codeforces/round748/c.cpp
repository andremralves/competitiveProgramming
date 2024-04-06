/**
 *    author: mralves 
 *    created: 31-01-2024 10:41:55       
**/
#include <bits/stdc++.h>

#define all(x) x.begin(),x.end()

// less is more
using namespace std;
using ll = long long;

void solve() {
  int N, K; cin>>N>>K;
  vector<int> a(K);
  for(int i=0; i<K; i++) {
    cin>>a[i];
  }
  sort(a.rbegin(), a.rend());

  int cat = 0;
  int ans = 0;
  for(int i=0; i<K; i++) {
    if(cat >= a[i]) break;
    cat += N-a[i];
    //cout<<"cat:"<<cat<<"\n";
    ans++;
  }
  cout<<ans<<"\n";
}

int main () {
  std::ios::sync_with_stdio(false);
  std::cin.tie(nullptr);

  int t = 1;
  cin>>t;
  while (t--) solve();
  return 0;
}
