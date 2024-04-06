/**
 *    author: mralves 
 *    created: 03-11-2023 22:02:07       
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
  int N;
  cin>>N>>s;
  vector<string> que;
  que.push_back("");
  for(int i=0; i<(int)que.size(); i++) {
    string look = que[i];
    if(look.size() > 0 and s.find(look) == string::npos) {
      cout<<look<<"\n";
      return;
    }
    for(int j=0; j<26; j++) {
      que.push_back(look + (char)(j+'a'));
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
