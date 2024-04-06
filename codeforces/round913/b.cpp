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
  int N = s.size();
  vector<pair<char, int>> a, b;
  for(int i=0; i<N; i++) {
    if(s[i] == 'B') {
      if(b.size() == 0) continue;
      b.pop_back();
    } else if(s[i] == 'b') {
      if(a.size() == 0) continue;
      a.pop_back();
    } else if(islower(s[i])){
      a.emplace_back(s[i], i);
    } else {
      b.emplace_back(s[i], i);
    }
  }
  int i=0, j=0;
  while(i < (int)a.size() or j<(int)b.size()) {
    if(i < (int)a.size() and j<(int)b.size()) {
      if(a[i].second < b[j].second) {
        cout<<a[i].first;
        i++;
      } else {
        cout<<b[j].first;
        j++;
      }
    } else if(i<(int)a.size()) {
      cout<<a[i].first;
      i++;
    } else {
      cout<<b[j].first;
      j++;
    }
  }
  cout<<"\n";
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
