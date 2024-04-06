#include <bits/stdc++.h>
using namespace std;
int main() {
  int A,B,C;
  cin>>A>>B>>C;
  int div = -1;
  for(int i=A; i<=B; i++) {
    if(i%C==0)
      div = i;
  }
  cout<<div<<"\n";
  return 0;
}
