/**
 *    author: mralves 
 *    created: 24-08-2023 01:09:33       
**/
#include <bits/stdc++.h>

#define pb(x) push_back(x)
#define all(x) x.begin(),x.end()

using namespace std;
using ll = int64_t;
using ii = pair<int, int>;

ll ceil(ll a, ll b) {return a % b == 0 ? a / b : a / b + 1;}
vector<ii> dir4 = {{1, 0}, {0, 1}, {-1, 0}, {0, -1}};
vector<ii> dir8 = {{1, 0}, {1, 1}, {0, 1}, {-1, 1}, {-1, 0}, {-1, -1}, {0, -1}, {1, -1}};

void solve() {
  int N, K;
  cin>>N>>K;
  vector<int> a(N);
  for(int i=0; i<N; i++) {
    cin>>a[i];
    a[i] %= K;
    if(a[i] == 0) a[i] = K;
  }

  vector<int> p(N);
  iota(all(p), 0);
  sort(all(p), [&](const int i, const int j){
      if(a[i] == a[j]) return i<j;
      return a[i]>a[j];
      });
  for(int i=0; i<N; i++) {
    cout<<p[i]+1<<" ";
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
