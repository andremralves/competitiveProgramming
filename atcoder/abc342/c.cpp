#include <bits/stdc++.h>
using namespace std;

int main() {
  int N; cin>>N;
  string s; cin>>s;
  int Q; cin>>Q;
  vector<char> F(26);
  iota(F.begin(), F.end(), 0);
  while(Q--) {
    char c, d;
    cin>>c>>d;
    c-='a'; d-='a';
    for(int i=0; i<26; i++) {
      if(F[i] == c) F[i] = d;
    }
  }
  for(int i=0; i<N; i++) {
    cout<<(char)(F[s[i]-'a']+'a');
  }
  cout<<"\n";
  return 0;
}
