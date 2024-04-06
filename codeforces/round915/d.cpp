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
  deque<int> a(N);
  map<int, int> mp;
  for(int i=0; i<N; i++) {
    cin>>a[i];
    mp[a[i]] = i;
  }

  int mex = 0;
  vector<int> mexs(N);
  for(int i=0; i<N; i++) {
    if(a[i] == mex) mex++;
    mexs[i] = mex;
    cout<<mex<<" ";
  }
  cout<<"\n";

  ll sum = accumulate(all(mexs), 0ll);
  ll ans = sum;
  int shifts = 0;
  for(int i=0; i<N-1; i++) {
    int cur = a.front();
    a.pop_front();
    a.emplace_back(cur);
    shifts++;

    mp[a[i]-1]
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
