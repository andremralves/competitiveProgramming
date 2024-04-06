/**
 *    author: mralves 
 *    created: 11-01-2024 16:54:55       
**/
#include <bits/stdc++.h>

#define all(x) x.begin(),x.end()

// less is more
using namespace std;
using ll = long long;

void solve() {
  int N; cin>>N;
  vector<int> a(N);
  for(int i=0; i<N; i++) {
    cin>>a[i];
  }

  ll wait = 0;
  ll ans = 0;
  set<ll> st;
  for(int i=N-1; i>=0; i--) {
    if(i%2==0) {
      if(a[i]>0) {
        ans+=a[i];
        st.insert(wait);
      } else {
        st.insert(wait+a[i]);
      }
    } else {
      st.insert(wait);
      if(a[i] > 0)
        wait+=a[i];
    }
    //cout<<"w:"<<wait<<"\n";
  }
  //cout<<ans<<" "<<max(0ll, *st.rbegin())<<"\n";
  cout<<ans+max(0ll, *st.rbegin())<<"\n";
}

int main () {
  std::ios::sync_with_stdio(false);
  std::cin.tie(nullptr);

  int t = 1;
  cin>>t;
  while (t--) solve();
  return 0;
}
