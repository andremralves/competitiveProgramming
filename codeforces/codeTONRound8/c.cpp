#include <bits/stdc++.h>

#define all(x) x.begin(),x.end()

// less is more
using namespace std;
using ll = long long;

void solve() {
  int N, X, Y;
  cin>>N>>X>>Y;
  vector<int> a(X);
  for(int i=0; i<X; i++) {
    cin>>a[i];
    a[i]--;
  }
  set<int> st;
  int ans = 0;
  int cnt= 0;
  sort(a.begin(), a.end());
  for(int i=0; i<X; i++) {
    st.insert(a[i]);
    if((a[i]+2)%N == a[(i+1)%X]) {
      ans++;
    } else if((a[i]+2)%N == a[(i+2)%X]) {
      if(st.count((a[(i+2)%X]+N-1)%N)) continue;
      ans++; i++;
    } else {
      if(a[i]+1 == a[(i+1)%X]) continue;
      st.insert((a[(i+1)%X]+N-1)%N);
      int x = (abs(a[(i+1)%X]-a[i])+1)/2;
      int y = abs(a[(i+1)%X]-a[i]-1)/2;
      cout<<x<<" "<<y<<"\n";
      if(y > Y) {
        y = Y;
        x = Y;
      }
      Y -= y;
      ans += x;
      cnt += max(0, y-1);
    }
  }
  cout<<ans<<" "<<st.size()<<" "<<cnt<<"\n";
  cout<<ans+st.size()+cnt-2<<"\n";
}

int main () {
  std::ios::sync_with_stdio(false);
  std::cin.tie(nullptr);

  int t = 1;
  cin>>t;
  while (t--) solve();
  return 0;
}
