#include <bits/stdc++.h>

using namespace std;

int main() {
  int a[3];
  cin>>a[0]>>a[1]>>a[2];

  if(count(a, a+3, 5) == 2 and count(a, a+3, 7) == 1) {
    cout<<"YES\n";
  } else {
    cout<<"NO\n";
  }
  return 0;
}

