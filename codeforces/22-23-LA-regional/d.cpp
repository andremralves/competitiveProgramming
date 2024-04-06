#include <bits/stdc++.h>
using namespace std;

int main() {
  int N, H, W;
  cin>>N>>H>>W;
  for(int i=0; i<N; i++) {
    char x, y;
    cin>>x>>y;
    if(x == 'Y' or W == 0) {
      cout<<"Y ";
      W++, H--;
    } else {
      cout<<"N ";
    }
    if(y == 'Y' or H == 0) {
      cout<<"Y\n";
      W--, H++;
    } else {
      cout<<"N\n";
    }
  }
  return 0;
}
