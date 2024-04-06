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

bool is_sorted(deque<int> a) {
  for(int i=1; i<(int)a.size(); i++) {
    if(a[i]<a[i-1]) {
      return false;
    }
  }
  return true;
}

void solve() {
  int N; cin>>N;
  vector<int> a(N);
  for(int i=0; i<N; i++) {
    cin>>a[i];
  }

  int pos = min_element(all(a))-a.begin();
  for(int i=pos+1; i<N; i++) {
    if(a[i]<a[i-1]) {
      cout<<"-1\n";
      return;
    }
  }
  cout<<pos<<"\n";
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
