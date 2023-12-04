/**
 *    author: mralves 
 *    created: 03-12-2023 11:37:07       
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
  string s;
  cin>>s;

  if(N >= 2) {
    if(s.find("0") != string::npos) {
      cout<<"YES\n";
    } else {
      cout<<"NO\n";
    }
  } else {
    if(s[0] == '1') {
      cout<<"NO\n";
    } else {
      cout<<"YES\n";
    }
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
