#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  cin>>N;
  vector<int> a(N);
  for(int i=0; i<N; i++) {
    cin>>a[i];
  }
  bool ok = true;
  sort(a.begin(), a.end());
  if(a[0] != 1)
    ok = false;
  for(int i=1; i<N; i++) {
    if(a[i] != a[i-1]+1)
      ok = false;
  }
  cout<<(ok?"Yes":"No")<<"\n";

  return 0;
}
