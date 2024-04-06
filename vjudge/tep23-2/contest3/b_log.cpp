#include <bits/stdc++.h>

using namespace std;

int main() {
  int N;
  cin>>N;

  vector<long long> a(N);
  for(int i=0; i<N; i++) {
    cin>>a[i];
  }

  if(count(a.begin(), a.end(), 0)) {
    cout<<"0\n";
    return 0;
  }

  double lg = 0;
  for(int i=0; i<N; i++) {
    lg += log10(a[i]);
  }
  if(lg > 18.1) {
    cout<<"-1\n";
    return 0;
  }

  long long ans = 1;
  for(int i=0; i<N; i++) {
    ans *= a[i];
  }
  cout<<(ans<=(long long)1e18?ans:-1)<<"\n";
  return 0;
}
