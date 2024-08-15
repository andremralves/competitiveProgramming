#include <bits/stdc++.h>

#define all(x) x.begin(),x.end()

// less is more
using namespace std;
using ll = long long;

bool is_palindrome(string &s) {
  int N = s.size();
  for(int i=0; i<N/2; i++) {
    if(s[i] != s[N-i-1]) return false;
  }
  return true;
}

void solve() {
  string s; cin>>s;
  int N = s.size();
  if(!is_palindrome(s)) {
    cout<<"YES\n";
    cout<<"1\n";
    cout<<s<<"\n";
    return;
  }
  int p = 0;
  for(int i=1; i<N; i++) {
    if(s[i] != s[i-1]) {
      p = i+1;
      break;
    }
  }

  for(int i=0; i<10; i++) {
    int j = p+i;
    if(j>=N) break;
    string t1 = s.substr(0, j);
    string t2 = s.substr(j);
    if(!is_palindrome(t1) and !is_palindrome(t2)) {
      cout<<"YES\n";
      cout<<"2\n";
      cout<<t1<<" "<<t2<<"\n";
      return;
    }
  }
  cout<<"NO\n";
}

int main () {
  std::ios::sync_with_stdio(false);
  std::cin.tie(nullptr);

  int t = 1;
  cin>>t;
  while (t--) solve();
  return 0;
}
