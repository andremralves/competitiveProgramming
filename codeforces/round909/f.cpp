/**
 *    author: mralves 
 *    created: 17-11-2023 11:35:26       
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
  int N, Q;
  cin>>N>>Q;

  for(int i=0; i<N-1; i++) {
    cout<<i+1<<" "<<i+2<<"\n";
  }

  int size = N-1;
  while(Q--) {
    int d; cin>>d;
    if(size == d) {
      cout<<"-1 -1 -1\n";
    } else {
      cout<<N<<" "<<size<<" "<<d<<"\n";
      size = d;
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
