/**
 *    author: mralves 
 *    created: 14-11-2023 18:01:41       
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
  vector<string> ss(N);
  map<string, int> mp;
  for(int i=0; i<N; i++) {
    cin>>ss[i];
    mp[ss[i]]++;
  }
  for(int i=0; i<N; i++) {
    if(ss[i][0] != '!') {
      if(mp.count("!" + ss[i])) {
        cout<<ss[i]<<"\n";
        return;
      }
    }
  }
  cout<<"satisfiable"<<"\n";

}

int main ()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int t = 1;
    while (t--) solve();
    return 0;
}