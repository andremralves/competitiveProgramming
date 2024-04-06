#include <bits/stdc++.h>
using namespace std;

int main() {
  cout<<setprecision(10)<<fixed;
  double A, B, C;
  cin>>A>>B>>C;

  if(A == 0 and B == 0) {
    if(C == 0) {
      cout<<"-1\n";
    } else {
      cout<<"0\n";
    }
    return 0;
  }

  if(A == 0) {
    cout<<1<<"\n";
    cout<<-C/B<<"\n";
    return 0;
  }

  double delta = B*B-4*A*C;
  if(delta < 0) {
    cout<<0<<"\n";
    return 0;
  }
  //cout<<"delta:"<<delta<<"\n";
  //cout<<sqrt(delta)<<"\n";
  double x1 = (-B+sqrt(delta))/(2*A);
  double x2 = (-B-sqrt(delta))/(2*A);

  if(delta == 0) {
    cout<<1<<"\n";
    cout<<x1<<"\n";
  } else {
    cout<<2<<"\n";
    cout<<min(x1, x2)<<"\n";
    cout<<max(x1, x2)<<"\n";
  }

  return 0;
}
