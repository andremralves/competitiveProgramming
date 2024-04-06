/**
 *    author: mralves 
 *    created: 05-12-2023 11:44:56       
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

  for(int i=0; i<8; i++) {
    string t = "";
    t += 'a'+i;
    t += s[1];
    if(t != s)
      cout<<t<<"\n";
  }

  for(int i=0; i<8; i++) {
    string t = "";
    t += s[0];
    t += '1'+i;
    if(t != s)
      cout<<t<<"\n";
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
