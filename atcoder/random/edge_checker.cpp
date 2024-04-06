#include <bits/stdc++.h>

using namespace std;

int main() {
  int A, B;
  cin>>A>>B;

  if(A < B)
    swap(A, B);

  if(abs(A-B) == 1) {
    cout<<"Yes\n";
  } else if(A == 10 and B == 1) {
    cout<<"Yes\n";
  } else {
    cout<<"No\n";
  }
  return 0;
}
