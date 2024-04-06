#include <bits/stdc++.h>
using namespace std;

vector<int> divisors(int N, int X) {
  vector<int> divs;
  for(int i=1; i*i<=N; i++) {
    if(N%i==0) {
      divs.push_back(i);
      if(i!=N/i) divs.push_back(N/i);
    }
  }
  vector<int> d;
  for(auto div:divs) {
    if(div%2) continue;
    if((div+2)/2 >= X) {
      d.push_back(div);
    }
  }
  return d;
}

vector<int> divisors2(int N, int X) {
  vector<int> divs;
  for(int i=1; i*i<=N; i++) {
    if(N%i==0) {
      divs.push_back(i);
      if(i!=N/i) divs.push_back(N/i);
    }
  }
  vector<int> d;
  for(auto div:divs) {
    if(div > X and div > 2 and div%2 == X%2 and X%2 == N%2) {
      d.push_back(div);
    }
  }
  return d;
}
void solve() {
  int N, X; cin>>N>>X;
  vector<int> d1 = divisors(N-X, X);
  vector<int> d2 = divisors2(N, X);
  set<int> st;
  for(auto d:d1) {
    //cout<<d<<" ";
    st.insert((d+2)/2);
  }
  //cout<<"\n";
  for(auto d:d2) {
    //cout<<d<<" ";
    st.insert((d+X)/2);
  }
  //cout<<"\n";
  cout<<st.size()<<"\n";
}

int main() {
  int t; cin>>t;
  while(t--) solve();
  return 0;
}
