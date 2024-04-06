/**
 *    author: mralves 
 *    created: 24-11-2023 14:56:02       
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
  map<string, int> mp;
  for(int i=0; i<N; i++) {
    string s;
    cin>>s;
    mp[s]++;
  }
  int mx = 0;
  for(auto [a, b]: mp) {
    mx = max(mx, b);
  }
  vector<string> ss;
  for(auto [a, b]: mp) {
    if(b == mx) {
      ss.push_back(a);
    }
  }

  sort(ss.begin(), ss.end());
  for(auto s:ss) {
    cout<<s<<"\n";
  }
}

int main ()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int t = 1;
    while (t--) solve();
    return 0;
}
