/**
 *    author: mralves 
 *    created: 07-11-2023 11:34:29       
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
  vector<int> hist(101);
  for(int i=0; i<N; i++) {
    cin>>a[i];
    hist[a[i]]++;
  }

  int cnt = 0;
  for(auto x: hist) {
    if(x>=2)
      cnt++;
  }
  if(cnt<2) {
    cout<<"-1\n";
    return;
  }

  vector<int> b(N, 1);
  vector<int> used(N);
  int k = 2;
  for(int i=0; i<N; i++) {
    bool found = false;
    for(int j=i+1; j<N; j++) {
      if(used[j]) continue;
      if(a[i] == a[j]) {
        used[j] = true;
        found = true;
        b[j] = k;
      }
    }
    if(found) {
      k = 5-k;
    }
  }

  for(auto x: b) {
    cout<<x<<" ";
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
