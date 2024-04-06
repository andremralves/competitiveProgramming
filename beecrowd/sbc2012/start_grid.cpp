#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  while(cin>>N) {
    vector<int> a(N), b(N);
    for(int i=0; i<N; i++) {
      cin>>a[i];
    }
    for(int i=0; i<N; i++) {
      cin>>b[i];
    }
    int ans = 0;
    for(int i=0; i<N; i++) {
      int j = find(a.begin(), a.end(), b[i])-a.begin();
      int pos = i;
      while(j > pos) {
        ans++;
        swap(a[j], a[j-1]);
        j--;
      }
    }
    cout<<ans<<"\n";
  }
  return 0;
}
