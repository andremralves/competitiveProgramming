#include <bits/stdc++.h>
using namespace std;

const int MAXN = 200005;
long long BIT[MAXN];
int N, Q;
long long query(int i) {
  long long res = 0;
  for(++i; i>0; i-=i&-i) {
    res += BIT[i];
  }
  return res;
}
void update(int i, int v) {
  for(++i; i<=N; i+=i&-i) {
    BIT[i] += v;
  }
}


int main() {
  cin>>N>>Q;
  vector<int> a(N);
  for(int i=0; i<N; i++) {
    cin>>a[i];
    update(i, a[i]);
  }

  while(Q--) {
    int q, x, y;
    cin>>q>>x>>y;
    if(q == 1) {
      x--;
      update(x, (long long)y-(query(x)-query(x-1)));
    } else {
      x--, y--;
      cout<<query(y)-query(x-1)<<"\n";
    }
  }

  return 0;
}
