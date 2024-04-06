/**
 *    author: mralves 
 *    created: 02-01-2024 15:06:48       
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
  vector<int> a(N), odd, even;
  for(int i=0; i<N; i++) {
    cin>>a[i];
    if(a[i]&1) odd.emplace_back(a[i]);
    else even.emplace_back(a[i]);
  }
  sort(odd.rbegin(), odd.rend());
  sort(even.rbegin(), even.rend());
  vector<int> sorted;
  for(int i=0; i<N; i++) {
    if(a[i]&1) {
      sorted.emplace_back(odd.back());
      odd.pop_back();
    } else {
      sorted.emplace_back(even.back());
      even.pop_back();
    }
  }

  cout<<(is_sorted(all(sorted))?"YES\n":"NO\n");

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
