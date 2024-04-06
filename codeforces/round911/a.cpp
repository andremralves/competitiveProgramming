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
  int N;  cin>>N;
  string s;
  cin>>s;
  ll ans = 0;
  for(int i=0; i<N; i++) {
    int j = i;
    while(j < N and s[j] == '.') {
      j++;
    }
    if(j-i >= 3) {
      ans = 2;
      break;
    } else {
      ans +=(j-i);
    }
    i = j;
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
