/**
 *    author: mralves 
 *    created: 28-12-2023 11:35:40       
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
  int N; cin>>N;
  string s; cin>>s;
  string con = "bcd";
  vector<string> ans;
  for(int i=N-1; i>=0;) {
    if(con.find(s[i]) == string::npos) {
      ans.emplace_back(s.substr(i-1, 2));
      i-=2;
    } else {
      ans.emplace_back(s.substr(i-2, 3));
      i-=3;
    }
  }
  reverse(all(ans));
  for(int i=0; i<(int)ans.size(); i++) {
    if(i != (int)ans.size()-1)
      cout<<ans[i]<<".";
    else
      cout<<ans[i]<<"\n";
  }
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

// babac
// baca
