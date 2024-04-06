/**
 *    author: mralves 
 *    created: 27-01-2024 20:50:52       
**/
#include <bits/stdc++.h>

#define all(x) x.begin(),x.end()

// less is more
using namespace std;
using ll = long long;

int N, K, M;
bool has_all(string s) {
  for(int i=0; i<K; i++) {
    if(s.find('a'+i) == string::npos) return false;
  }
  return true;
}
char find_bad(string s) {
  for(int i=0; i<K; i++) {
    if(s.find('a'+i) == string::npos) return 'a'+ i;
  }
  return 'a';
}
void solve() {
  cin>>N>>K>>M;
  string s; cin>>s;

  set<char> st;
  string bad = "";
  for(int i=0; i<M; i++) {
    st.insert(s[i]);
    if((int)st.size() == K) {
      st.clear();
      bad += s[i];
    }
    if((int)bad.size() == N) break;
  }

  if((int)bad.size() == N) {
    cout<<"YES\n";
  } else {
    cout<<"NO\n";
    char notin;
    for(int i=0; i<K; i++) {
      if(st.count('a'+i) == 0) {
        notin = 'a'+i;
        break;
      }
    }
    cout<<bad<<string(N-bad.size(), notin)<<"\n";
  }
}

int main () {
  std::ios::sync_with_stdio(false);
  std::cin.tie(nullptr);

  int t = 1;
  cin>>t;
  while (t--) solve();
  return 0;
}
