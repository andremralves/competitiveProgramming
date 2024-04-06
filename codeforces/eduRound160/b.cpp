/**
 *    author: mralves 
 *    created: 18-12-2023 11:36:20       
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
  string s;
  cin>>s;

  int ones=0, zeros = 0;
  for(int i=0; i<(int)s.size(); i++) {
    if(s[i] == '1') {
      ones++;
    } else {
      zeros++;
    }
  }

  int ans = 0;
  for(int i=0; i<(int)s.size(); i++) {
    if(s[i] == '0') {
      if(ones > 0)
        ones--;
      else {
        ans = (int)s.size()-i;
        break;
      }
    } 
    if(s[i] == '1') {
      if(zeros > 0)
        zeros--;
      else  {
        ans = (int)s.size()-i;
        break;
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
    cin>>t;
    while (t--) solve();
    return 0;
}
