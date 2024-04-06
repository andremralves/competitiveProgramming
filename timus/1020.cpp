#include <bits/stdc++.h>

using namespace std;

#define PI 3.141592653589793

int main() {
  int N;
  double R;
  cin>>N>>R;

  double ans = 0;
  vector<double> x(N), y(N);
  for(int i=0; i<N; i++) {
    cin>>x[i]>>y[i];
    if(i) {
      double a = abs(x[i]-x[i-1]);
      double b = abs(y[i]-y[i-1]);
      ans += sqrt(a*a+b*b);
    }
  }
  double a = abs(x[N-1]-x[0]);
  double b = abs(y[N-1]-y[0]);
  ans += sqrt(a*a+b*b);
  ans += 2*PI*R;
  cout<<setprecision(2)<<fixed<<ans<<"\n";

  return 0;
}
