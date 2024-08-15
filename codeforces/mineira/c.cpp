#pragma GCC optimize ("O3")
#include <bits/stdc++.h>
using namespace std;

#define all(x) x.begin(),x.end()
#define f first
#define s second
#define nl '\n'

const int MAX = 1e8;
int main() {
  cin.tie(0);
  ios::sync_with_stdio(0);
  int N, P;
  cin>>N>>P;
  vector<int> A(N);
  for(auto &a: A) {
    cin>>a;
  }

  map<int, int> mp;
  vector<pair<int, string>> ps(P);
  for(int i=0; i<P; i++) {
    cin>>ps[i].f>>ps[i].s;
    ps[i].f--;
    mp[ps[i].f] = i;
  }

  set<int> st;
  for(int i=0; i<N; i++) {
    st.insert(i);
  }

  int v = 0;
  string last = "";
  int cnt = 0;
  while(st.size() > 1) {
    //cout<<st.size()<<nl;
    set<int> rem;
    for(auto cur: st) {
      if(cnt > MAX) {
        cout<<-1<<nl;
        return 0;
      }
      if(A[cur] < P-mp[v]) {
        rem.insert(cur);
        last = ps[mp[v]].s;
      }
      v++; v %= P;
      cnt++;
    }
    for(auto r:rem) {
      st.erase(r);
    }
  }
  cout<<*st.begin()+1<<nl;
  cout<<last<<nl;
  return 0;
}

