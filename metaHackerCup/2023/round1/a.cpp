/**
 *    author: mralves 
 *    created: 07-10-2023 14:00:34       
**/
#include <bits/stdc++.h>

#define pb(x) push_back(x)
#define all(x) x.begin(),x.end()

using namespace std;
using ll = int64_t;
using ii = pair<int, int>;

ll ceil(ll a, ll b) {return a % b == 0 ? a / b : a / b + 1;}
vector<ii> dir4 = {{1, 0}, {0, 1}, {-1, 0}, {0, -1}};
vector<ii> dir8 = {{1, 0}, {1, 1}, {0, 1}, {-1, 1}, {-1, 0}, {-1, -1}, {0, -1}, {1, -1}};

void solve() {
  int N;
  cin>>N;
  cout<<fixed;

  vector<double> a(N);
  for(int i=0; i<N; i++) {
    cin>>a[i];
  }
  sort(all(a));

  if(N > 5) {
    cout<<(a[N-1]+a[N-2])/2-(a[0]+a[1])/2<<"\n";
  } else {
    if(N == 4) {
      cout<<(a[N-1]+a[N-2])/2-(a[0]+a[1])/2<<"\n";
    } else {
      double op1 = (a[N-1] + a[N-3])/2;
      double op2 = (a[N-1] + a[N-2])/2;
      double op3 = (a[0] + a[2])/2;
      double op4 = (a[0] + a[1])/2;

      cout<<max(op1-op4, op2-op3)<<"\n";
    }
  }
}

int main() {
  std::ios::sync_with_stdio(false);
  std::cin.tie(nullptr);
  int t;
  cin>>t;
  for(int i=1; i<=t; i++) {
    cout<<"Case #"<<i<<": ";
    solve();
  }
  return 0;
}

