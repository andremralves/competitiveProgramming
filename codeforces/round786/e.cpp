/**
 *    author: mralves 
 *    created: 01-02-2024 05:24:25       
**/
#include <bits/stdc++.h>

#define all(x) x.begin(),x.end()

// less is more
using namespace std;
using ll = long long;

int calc_damage(int a, int b) {
  if(a < b) swap(a, b);
  if(b <= a/2) {
    return (a+1)/2;
  } else {
    int x = a-b;
    a -= 2*x; b-=x;
    int cnt = x;
    cnt += 2*(a/3)+(a%3);
    //cout<<"cnt:"<<cnt<<"\n";
    return cnt;
  }
}

void solve() {
  int N; cin>>N;
  vector<int> a(N);
  for(int i=0; i<N; i++) {
    cin>>a[i];
  }

  vector<int> single;
  int mn = 1e6;
  for(int i=0; i<N; i++) {
    int self = (a[i]+1)/2;
    single.emplace_back(self);
    if(i>0) {
      mn = min(mn, calc_damage(a[i], a[i-1]));
    }
    if(i<N-1 and i>0) {
      int x = a[i-1]/2;
      x+=a[i+1]/2;
      if(a[i-1]%2 or a[i+1]%2)
        x++;
      //cout<<"x:"<<x<<"\n";
      mn = min(mn, x);
    }
  }
  sort(single.begin(), single.end());
  cout<<min(mn, single[0]+single[1])<<"\n";
}

// 10
// 8
// 7
// 5
// 4
// 2
// 1
// -1

// 10
// 9
// 7
// 6
// 4
// 3
// 1
// 0

// 6 6
// 5 4
// 4 2
// 2 1
// 0 0 
//
// 8 8
// 7 6
// 6 4
// 5 2
// 4 0
// 2 0
// 0 0

int main () {
  std::ios::sync_with_stdio(false);
  std::cin.tie(nullptr);

  int t = 1;
  while (t--) solve();
  return 0;
}
