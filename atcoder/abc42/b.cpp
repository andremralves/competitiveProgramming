#include <bits/stdc++.h>

using namespace std;

int main() {
  int N, L;
  cin>>N>>L;
  vector<string> s(N);
  for(int i=0; i<N; i++) {
    cin>>s[i];
  }
  sort(s.begin(), s.end());

  for(int i=0; i<N; i++) {
    cout<<s[i];
  }
  cout<<"\n";
  return 0;
}


