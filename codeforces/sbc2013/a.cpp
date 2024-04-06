#include <bits/stdc++.h>
using namespace std;

bool check(int A, int B, int C) {
  if(A != B and A != C) return true;
  return false;
}

int main() {
  int A, B, C;
  cin>>A>>B>>C;

  if(check(A, B, C)) {
    cout<<"A\n";
  } else if(check(B, A, C)) {
    cout<<"B\n";
  } else if(check(C, A, B)) {
    cout<<"C\n";
  } else {
    cout<<"*\n";
  }
  return 0;
}
