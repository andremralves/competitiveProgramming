#include <bits/stdc++.h>
using namespace std;
const int INF = 1000000000;
int main(){
  int t;
  cin >> t;
  for (int i = 0; i < t; i++){
    int n;
    cin >> n;
    vector<int> a(n);
    for (int j = 0; j < n; j++){
      cin >> a[j];
    }
    int mn = 0, mx = INF;
    for (int j = 0; j < n - 1; j++){
      if (a[j] < a[j + 1]){
        mx = min(mx, (a[j] + a[j + 1]) / 2);
      }
      if (a[j] > a[j + 1]){
        mn = max(mn, (a[j] + a[j + 1] + 1) / 2);
      }
    }
    if (mn <= mx){
      cout << mn << endl;
    } else {
      cout << -1 << endl;
    }
  }
}
