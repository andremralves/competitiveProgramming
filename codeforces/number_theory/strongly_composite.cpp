/**
 *    author: mralves
 *    created: 18-05-2023 13:24:24
 **/
#include <bits/stdc++.h>

#define pb(x) push_back(x)
#define all(x) x.begin(), x.end()

using namespace std;
using ll = int64_t;

ll ceil(ll a, ll b) { return a % b == 0 ? a / b : a / b + 1; }

void solve() {
  int n;
  cin >> n;
  vector<int> a(n);
  map<int, int> factors;
  for (int i = 0; i < n; i++) {
    cin >> a[i];
    for (int j = 2; j * j <= a[i]; j++) {
      while (a[i] % j == 0) {
        a[i] /= j;
        factors[j]++;
      }
    }
    if(a[i] > 1) {
        factors[a[i]]++;
    }
  }

  int cnt = 0, odd = 0;
  //cout << factors.size() << "\n";
  for (auto f : factors) {
    if (f.second % 2) {
      f.second--;
      odd++;
    }
    cnt += f.second / 2;
  }
  cout << cnt + odd / 3 << "\n";
}

int main() {
  std::ios::sync_with_stdio(false);
  std::cin.tie(nullptr);

  int t = 1;
  cin >> t;
  while (t--)
    solve();
  return 0;
}
