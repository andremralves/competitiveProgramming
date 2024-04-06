/**
 *    author: mralves 
 *    created: 06-01-2024 11:34:26       
**/
#include <bits/stdc++.h>

#define pb(x) push_back(x)
#define all(x) x.begin(),x.end()

using namespace std;
using ll = long long;
using pii = pair<int, int>;

ll ceil(ll a, ll b) {return a % b == 0 ? a / b : a / b + 1;}
vector<pii> dir4 = {{1, 0}, {0, 1}, {-1, 0}, {0, -1}};
vector<pii> dir8 = {{1, 0}, {1, 1}, {0, 1}, {-1, 1}, {-1, 0}, {-1, -1}, {0, -1}, {1, -1}};

void solve() {
  int N; cin>>N;
  string s; cin>>s;
  int neg=0, pos=0;
  for(int i=0; i<N; i++) {
    if(s[i] == '+') {
      if(neg>0) neg--;
      else pos++;
    } else {
      if(pos>0)pos--;
      else neg++;
    }
  }
  cout<<neg+pos<<"\n";
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
