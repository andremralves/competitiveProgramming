#include <bits/stdc++.h>
using namespace std;

typedef complex<double> P;
#define X real()
#define Y imag()

int main() {
  int N;
  cout<<setprecision(2)<<fixed;
  while(cin>>N) {
    double L, H;
    cin>>L>>H;
    vector<P> s(N), e(N);
    for(int i=0; i<N; i++) {
      double y1, x2, y2;
      cin>>y1>>x2>>y2;
      if(i%2==0)
        s[i] = {0, y1};
      else
        s[i] = {L, y1};
      e[i] = {x2, y2};
    }

    double ans = 1e5;
    for(int i=0; i<N; i++) {
      if(i) {
        // this formula gets the height of a triangle
        double d = abs((conj(s[i]-e[i-1])*(e[i]-e[i-1])).Y/abs(e[i]-s[i]));
        // some time the heigh is not the distance
        if((i%2 and e[i-1].X < e[i].X) or (!(i%2) and e[i-1].X > e[i].X)) {
          d = abs(e[i]-e[i-1]);
        }
        ans = min(ans, d);
      }
      if(i%2==0) {
        ans = min(ans, L-e[i].X);
      } else {
        ans = min(ans, e[i].X-0);
      }
    }
    cout<<ans<<"\n";
  }
  return 0;
}
