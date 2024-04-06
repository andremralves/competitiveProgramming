/**
 *    author: mralves 
 *    created: 06-02-2024 11:43:54       
**/
#include <bits/stdc++.h>

#define all(x) x.begin(),x.end()

// less is more
using namespace std;
using ll = long long;

void solve() {
  int N; cin>>N;
  vector<int> a(N);
  for(int i=0; i<N; i++) {
    cin>>a[i];
  }
  vector<int> hist(26);
  string s;
  for(int i=0; i<N; i++) {
    for(int j=0; j<26; j++) {
      if(hist[j] == a[i]) {
        s += j+'a';
        hist[j]++;
        break;
      }
    }
  }
  cout<<s<<"\n";
}

int main () {
  std::ios::sync_with_stdio(false);
  std::cin.tie(nullptr);

  int t = 1;
  cin>>t;
  while (t--) solve();
  return 0;
}
