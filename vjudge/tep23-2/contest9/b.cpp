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
  vector<pii> ps(N);
  for(int i=0; i<N; i++) {
    int a, b;
    cin>>a>>b;
    ps[i] = {a, b};
  }

  set<pii> st;
  for(int i=0; i<N; i++) {
    for(int j=0; j<N; j++) {
      if(i == j) continue;
      auto [x1, y1] = ps[i];
      auto [x2, y2] = ps[j];
      if(y2 <= (x2-x1)+y1 and y2 >= y1-(x2-x1)) {
        if(i > j)
          st.insert(pii(j, i));
        else
          st.insert(pii(i, j));
      }
    }
  }
  cout<<st.size()<<"\n";
}

int main ()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int t = 1;
    while (t--) solve();
    return 0;
}
