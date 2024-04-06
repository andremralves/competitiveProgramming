#include <bits/stdc++.h>
using namespace std;

int main() {
  int N, K, E;
  cin>>N>>K>>E;
  int R = N-K-E;
  if(E > 7 and R > 7) return 0;
  if(E < R) swap(E, R);
  if(E > 7 and K != E) {
    E = 0;
  }
  vector<int> p(7);
  iota(p.begin(), p.end(), 1);
  int ans = 1001;
  do {
    int tE=E, tR=R;
    int i;
    for(i=0; i<7; i++) {
      int x = p[i];
      if(x == K) continue;
      if(tR >= x) {
        tR-=x;
      } else if(tE > 7) {
        break;
      } else if(tE >= x) {
        tE -= x;
      }
    }
    if(tE > 7) {
      while(i<7) {
        if(tE-p[i] != K) {
          tE = 0;
          break;
        }
        i++;
      }
    }
    ans = min(tE+tR, ans);
  }while(next_permutation(p.begin(), p.end()));
  cout<<ans<<"\n";
  return 0;
}
