/**
 *    author: mralves 
 *    created: 01-02-2024 05:24:25       
**/
#include <bits/stdc++.h>

#define all(x) x.begin(),x.end()

// less is more
using namespace std;
using ll = long long;


const int MAXN = 2000005;
int BIT[MAXN], SZ;
void update(int i, int v) {
  for(++i;i<=SZ;i+=i&-i) {
    BIT[i] += v;
  }
}
int query(int i) {
  int res = 0;
  for(++i; i>=1; i-=i&-i) {
    res += BIT[i];
  }
  return res;
}


void solve() {
  int N, M, Q;
  cin>>N>>M>>Q;
  SZ = N*M;
  for(int i=0; i<N; i++) {
    for(int j=0; j<M; j++) {
      char c; cin>>c;
      if(c == '*') 
        update(j*N+i, 1);
    }
  }

  while(Q--) {
    int i, j;
    cin>>i>>j;
    i--, j--;
    int pos = j*N+i;
    if(query(pos)-query(pos-1) == 1) {
      update(pos, -1);
    } else {
      update(pos, 1);
    }
    int all = query(N*M-1);
    if(all == 0) cout<<0<<"\n";
    else cout<<all-query(all-1)<<"\n";
  }
}

int main () {
  std::ios::sync_with_stdio(false);
  std::cin.tie(nullptr);

  int t = 1;
  while (t--) solve();
  return 0;
}
