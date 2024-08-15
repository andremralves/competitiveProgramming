#include <bits/stdc++.h>
using namespace std;

#define all(x) x.begin(),x.end()
using vi = vector<int>;

const int MX = 300001;

vi G[MX];
int in[MX], out[MX];
int d[MX], t = 0;
void dfs(int u, int p) {
  in[u]= t++;
  for(auto v: G[u]) {
    if(v != p) {
      d[v] = d[u]+1;
      dfs(v, u);
    }
  }
  out[u] = t++;
}

int main() {
  cin.tie(0);
  ios_base::sync_with_stdio(0);
  int N, Q; cin>>N>>Q;
  for(int i=1; i<N; i++) {
    int p; cin>>p; p--;
    G[i].push_back(p);
    G[p].push_back(i);
  }
  dfs(0, -1);
  while(Q--) {
    int M; cin>>M;
    vi A(M);
    for(int i=0; i<M; i++) {
      cin>>A[i];
      A[i]--;
    }
    sort(all(A), [&](auto lhs, auto rhs) {
        return d[lhs]>d[rhs];
        });

    set<int> st;
    for(int i=0; i<M; i++) {
      auto it = st.lower_bound(in[A[i]]);
      if(it == st.end() || out[A[i]] < *it) {
        st.insert(in[A[i]]);
      }
    }
    cout<<st.size()<<"\n";
  }

  return 0;
}
