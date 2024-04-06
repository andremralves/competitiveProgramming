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
  int N;
  cin>>N;
  vector<int> a(N);
  for(int i=0; i<N; i++) {
    cin>>a[i];
  }

  sort(all(a));

  if(a[0] < 0) {
    cout<<"No\n";
  } else {
    for(int i=0; i<(int)a.size(); i++) {
      for(int j=0; j<(int)a.size(); j++) {
        if(i == j) continue;
        if(!count(all(a), abs(a[i]-a[j])))
          a.push_back(abs(a[i]-a[j]));
      }
    } 
    cout<<"Yes\n";
    cout<<a.size()<<"\n";
    for(auto x: a) {
      cout<<x<<" ";
    }
    cout<<"\n";
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
