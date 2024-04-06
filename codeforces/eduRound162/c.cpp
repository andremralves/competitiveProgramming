/**
 *    author: mralves 
 *    created: 23-02-2024 11:35:46       
**/
#include <bits/stdc++.h>

#define all(x) x.begin(),x.end()

// less is more
using namespace std;
using ll = long long;

void solve() {
  int N, Q;
  cin>>N>>Q;
  vector<int> c(N);
  for(int i=0; i<N; i++) cin>>c[i];
  vector<ll> psum(N+1), ones(N+1);
  for(int i=1; i<=N; i++) {
    psum[i] = psum[i-1]+c[i-1];
    if(c[i-1] == 1) ones[i]++;
    ones[i] += ones[i-1];
  }
  while(Q--) {
    int l, r;
    cin>>l>>r;
    int need = (ones[r]-ones[l-1])*2;
    need += (r-l+1)-(ones[r]-ones[l-1]);
    //cout<<need<<"\n";
    if(r-l+1 > 1 and psum[r]-psum[l-1] >= need) {
      cout<<"YES\n";
    } else {
      cout<<"NO\n";
    }
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
