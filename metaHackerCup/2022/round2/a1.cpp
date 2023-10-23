#include <bits/stdc++.h>

using namespace std;

int checkHist(vector<int> h1, vector<int> h2) {
  int diff = 0;
  for(int i=0; i<26; i++) {
    if(h1[i] >= h2[i]) {
      diff += h1[i]-h2[i];
    } else {
      return -1;
    }
  }
  return diff;
}

void solve() {
  string s;
  cin>>s;
  int Q;
  cin>>Q;

  vector<vector<int>> psum(s.size()+1, vector<int>(26));

  for(int i=1; i<=(int)s.size(); i++) {
    psum[i][s[i-1]-'a'] = 1;
    for(int j=0; j<26; j++) {
      psum[i][j] += psum[i-1][j];
    }
  }

  int ans = 0;
  for(int i=0; i<Q; i++) {
    int l, r;
    cin>>l>>r;
    if((r-l+1) % 2 == 0) continue;
    int m = l+(r-l)/2;
    vector<int> hist1(26), hist2(26);
    for(int j=0; j<26; j++) {
      hist1[j] = psum[m-1][j]-psum[l-1][j];
    }
    for(int j=0; j<26; j++) {
      hist2[j] = psum[r][j]-psum[m][j];
    }
    if(checkHist(hist1, hist2) == 0) {
      ans++;
      continue;
    }
    hist1[s[m-1]-'a']++;
    if(checkHist(hist1, hist2) == 1) {
      ans++;
      continue;
    }
    hist1[s[m-1]-'a']--;
    hist2[s[m-1]-'a']++;
    if(checkHist(hist2, hist1) == 1) {
      ans++;
      continue;
    }
  }
  cout<<ans<<"\n";
}

int main() {
  int t;
  cin>>t;
  for(int i=1; i<=t; i++) {
    cout<<"Case #"<<i<<":";
    solve();
  }
  return 0;
}
