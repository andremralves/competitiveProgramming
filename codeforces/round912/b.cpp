/**
 *    author: mralves 
 *    created: 30-11-2023 13:33:01       
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

  vector<vector<int>> M(N, vector<int>(N));
  int sum = 0;
  for(int i=0; i<N; i++) {
    for(int j=0; j<N; j++) {
      cin>>M[i][j];
      sum += M[i][j];
    }
  }

  bool ok = true;
  vector<int> a(N);
  for(int i=0; i<N; i++) {
    a[i] = INT_MAX;
    for(int j=0; j<N; j++) {
      if(i != j)
        a[i] &= M[i][j];
    }
  }
  for(int i=0; i<N; i++) {
    for(int j=0; j<N; j++) {
      if(i != j and M[i][j] != (a[i] | a[j])) {
        ok = false;
      }
    }
  }

  cout<<(ok?"YES\n":"NO\n");
  if(ok) {
  for(auto x: a) {
    if(x == INT_MAX) {
      cout<<1<<" ";
    } else 
      cout<<x<<" ";
  }
  cout<<"\n";
  }
}

// 0 0 1
//
// 1 3 - 1
// 2 3 - 1

int main ()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int t = 1;
    cin>>t;
    while (t--) solve();
    return 0;
}
