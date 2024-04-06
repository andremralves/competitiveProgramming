/**
 *    author: mralves 
 *    created: 05-10-2023 18:24:39       
**/
#include <bits/stdc++.h>

#define pb(x) push_back(x)
#define all(x) x.begin(),x.end()

using namespace std;
using ll = int64_t;
using ii = pair<int, int>;

ll ceil(ll a, ll b) {return a % b == 0 ? a / b : a / b + 1;}
vector<ii> dir4 = {{1, 0}, {0, 1}, {-1, 0}, {0, -1}};
vector<ii> dir8 = {{1, 0}, {1, 1}, {0, 1}, {-1, 1}, {-1, 0}, {-1, -1}, {0, -1}, {1, -1}};

void solve() {
  int n;
  string s;
  cin>>n>>s;

  vector<int> rsum(n), gsum(n), bsum(n);
  rsum[0] = (s[0] == 'R');
  gsum[0] = (s[0] == 'G');
  bsum[0] = (s[0] == 'B');
  for(int i=1; i<n; i++) {
    rsum[i] = rsum[i-1] + (s[i] == 'R');
    gsum[i] = gsum[i-1] + (s[i] == 'G');
    bsum[i] = bsum[i-1] + (s[i] == 'B');
  }

  //cout<<rsum[n-1]<<" "<<bsum[n-1]<<" "<<gsum[n-1]<<"\n";
  ll ans = 0;
  for(int i=0; i<n; i++) {
    for(int j=i+1; j<n; j++) {
      if(s[j] != s[i]) {
        //cout<<i<<s[i]<<" "<<j<<s[j]<<"\n";
        int tmp = 0;
        if(s[i] != 'G' and s[j] != 'G') {
          tmp = gsum[n-1]-gsum[j] - (j+j-i < n ? (s[j+j-i] == 'G') : 0);
        }
        else if(s[i] != 'B' and s[j] != 'B')
          tmp = bsum[n-1]-bsum[j] - (j+j-i < n ? (s[j+j-i] == 'B') : 0);
        else if(s[i] != 'R' and s[j] != 'R')
          tmp = rsum[n-1]-rsum[j] - (j+j-i < n ? (s[j+j-i] == 'R') : 0);
        ans += tmp;
      }
    }
  }
  cout<<ans<<"\n";
}

int main ()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int t = 1;
    while (t--) solve();
    return 0;
}
