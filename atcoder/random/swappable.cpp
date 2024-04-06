#include <bits/stdc++.h>
using namespace std;
int main() {
  int N;
  cin>>N;
  vector<int> a(N);
  for(int i=0; i<N; i++) {
    cin>>a[i];
  }
  sort(a.begin(), a.end());
  long long ans = 0;
  for(int i=0; i<N; i++) {
    int j=i;
    while(j<N and a[j]==a[i]) {
      j++;
    }
    ans += (long long)(j-i)*i;
    i = j-1;
  }
  cout<<ans<<"\n";
  return 0;
}
