/**
 *    author: mralves 
 *    created: 26-11-2023 15:39:26       
**/
#include <bits/stdc++.h>

#define pb(x) push_back(x)
#define all(x) x.begin(),x.end()

using namespace std;
using ll = int64_t;
using pii = pair<int, int>;

ll ceil(ll a, ll b) {return a % b == 0 ? a / b : a / b + 1;}
vector<pii> dir4 = {{1, 0}, {0, 1}, {-1, 0}, {0, -1}};
vector<pii> dir8 = {{1, 0}, {1, 1}, {0, 1}, {-1, 1}, {-1, 0}, {-1, -1}, {0, -1}, {1, -1}};

void solve() {
  int N;
  cin>>N;
  vector<int> a(N);
  for(int i=0; i<N; i++) {
    cin>>a[i];
  }
  sort(all(a));

  int mx = *max_element(all(a));

  vector<vector<int>> divs(mx+1);
  for(int i=0; i<N; i++) {
    int j = a[i];
    while(j<=mx) {
      divs[j].push_back(i);
      j+=a[i];
    }
  }

  for(int i=0; i<(int)divs.size(); i++) {
    cout<<i<<": ";
    for(auto x:divs[i]) {
      cout<<x<<" ";
    }
    cout<<"\n";
  }

  ll ans = 0;
  for(int i=0; i<N; i++) {
    int sum = 0;
    int cnt = 0;
    cout<<a[i]<<": ";
    for(auto j: divs[a[i]]) {
      if(j >= i) break;
      sum += a[j]*(N-i-1);
      cnt++; 
    }
    cout<<sum<<" "<<(i-cnt)*(N-i-1)<<"\n";
    ans += (i-cnt)*(N-i-1);
    ans += sum;
  }
  cout<<ans<<"\n";
}

int main ()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int t = 1;
    cin>>t;
    while (t--) solve();
    return 0;
}
