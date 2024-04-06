/**
 *    author: mralves 
 *    created: 16-12-2023 11:34:27       
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

  map<char, vector<int>> mp;
  for(int i=0; i<N; i++) {
    mp[s[i]].emplace_back(i);
  }

  if(is_sorted(all(s))) {
    cout<<0<<"\n";
    return;
  }

  string ans;
  int last = -1;
  int first = -1;
  set<int> used;
  for(auto it = mp.rbegin(); it != mp.rend(); it++) {
    auto [c, vec] = *it;
    for(auto i:vec) {
      if(first == -1) first = i;
      if(i > last) {
        used.insert(i);
        ans += c;
        last = i;
      }
    }
  }
  int sz = ans.size();
  for(int i=0; i<N; i++) {
    if(used.count(i)) {
      s[i] = ans.back();
      ans.pop_back();
    }
  }
  if(!is_sorted(s.begin(), s.end())) {
    cout<<-1<<"\n";
    return;
  }
  cout<<sz-(*mp.rbegin()).second.size()<<"\n";
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
