#include <bits/stdc++.h>

using namespace std;

int main() {
  string s;
  cin>>s;

  int N = s.size();
  for(char c='a'; c<='z'; c++) {
    for(int i=0; i<N; i++) {
      int cnt = 0;
      int j;
      for(j=i; j<i+3 and j<N; j++) {
        if(s[j] == c) cnt++;
      }
      if(cnt >= 2) {
        cout<<i+1<<" "<<j<<"\n";
        return 0;
      }
    }
  }
  cout<<"-1 -1\n";
  return 0;
}



