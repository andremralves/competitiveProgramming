/**
 *    author:  tourist
 *    created: 18.07.2024 23:42:16
**/
#include <bits/stdc++.h>

using namespace std;

#ifdef LOCAL
#include "algo/debug.h"
#else
#define debug(...) 42
#endif

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);
  int tt;
  cin >> tt;
  while (tt--) {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
      cin >> a[i];
    }
    vector<bool> alive(n, true);
    vector<pair<int, int>> ops(n - 1);
    for (int x = n - 1; x >= 1; x--) {
      vector<int> who(x, -1);
      for (int i = 0; i < n; i++) {
        if (!alive[i]) {
          continue;
        }
        int t = a[i] % x;
        if (who[t] == -1) {
          who[t] = i;
        } else {
          ops[x - 1] = {i, who[t]};
          alive[i] = false;
          break;
        }
      }
    }
    cout << "YES" << '\n';
    for (auto& [u, v] : ops) {
      cout << u + 1 << " " << v + 1 << '\n';
    }
  }
  return 0;
}

