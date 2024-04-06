/**
 *    author: mralves 
 *    created: 24-12-2023 11:22:50       
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
  vector<int> a(N);
  int neg = 0;
  for(int i=0; i<N; i++) {
    cin>>a[i];
    if(a[i] < 0)
      neg++;
  }

  if(count(all(a), 0) >= 1) {
    cout<<"0\n";
    return;
  }

  if(neg%2) {
    cout<<"0\n";
  } else {
    cout<<"1\n";
    cout<<"1 0\n";
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
