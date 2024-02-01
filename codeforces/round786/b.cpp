/**
 *    author: mralves 
 *    created: 01-02-2024 05:24:25       
**/
#include <bits/stdc++.h>

#define all(x) x.begin(),x.end()

// less is more
using namespace std;
using ll = long long;

void solve() {
  string s; cin>>s;
  vector<string> words;
  for(int i=0; i<26; i++) {
    for(int j=0; j<26; j++) {
      if(i == j) continue;
      string word;
      word += i+'a';
      word += j+'a';
      words.emplace_back(word);
    }
  }
  cout<<(find(words.begin(), words.end(), s)-words.begin())+1<<"\n";
}

int main () {
  std::ios::sync_with_stdio(false);
  std::cin.tie(nullptr);

  int t = 1;
  cin>>t;
  while (t--) solve();
  return 0;
}
