/**
 *    author: mralves 
 *    created: 23-02-2024 00:40:02       
**/
#include <bits/stdc++.h>

#define all(x) x.begin(),x.end()

// less is more
using namespace std;
using ll = long long;

int lis(vector<int> const& a) {
    int n = a.size();
    const int INF = 1e9;
    vector<int> d(n+1, INF);
    d[0] = -INF;

    vector<int> idx(n), p(n);
    for (int i = 0; i < n; i++) {
        int l = upper_bound(d.begin(), d.end(), a[i]) - d.begin();
        if (d[l-1]+1 == a[i]) {
            d[l] = a[i];
            idx[l] = i;
        }
    }

    int ans = 0;
    for (int l = 1; l <= n; l++) {
        if (d[l] < INF) {
          cout<<idx[l]+1<<" ";
        }
    }
    cout<<"\n";
    return ans;
}

void solve() {
  int N; cin>>N;
  vector<int> a(N);
  for(int i=0; i<N; i++) cin>>a[i];
  lis(a);
}

int main () {
  std::ios::sync_with_stdio(false);
  std::cin.tie(nullptr);

  int t = 1;
  while (t--) solve();
  return 0;
}

