#include <bits/stdc++.h>
using namespace std;

// how many pages I need to write N words
// with L lines and C chars
const int INF = 1e9;
int main() {
  int N, L, C;
  while(cin>>N>>L>>C) {
    vector<string> lines(1);
    for(int i=0; i<N; i++) {
      string word; cin>>word;
      if(lines.back().size() == 0) {
        lines.back() += word;
      } else if((int)lines.back().size()+(int)word.size()+1 > C) {
        lines.push_back(word);
      } else {
        lines.back() += " " + word;
      }
    }
    cout<<(lines.size()+L-1)/L<<"\n";
  }
  return 0;
}
