/**
 *    author: mralves 
 *    created: 19-11-2023 11:33:54       
**/
#include <bits/stdc++.h>

#define pb(x) push_back(x)
#define all(x) x.begin(),x.end()

using namespace std;
using ll = int64_t;
using pii = pair<int, int>;

ll ceil(ll a, ll b) {return a % b == 0 ? a / b : a / b + 1;}
vector<pii> dir4 = {{1, 0}, {0, 1}, {-1, 0}, {0, -1}};
vector<pii> dir8 = {{1, 0}, {1, 1}, {0, 1}, {-1, 1}, {-1, 0}, {-1, -1}, {0, -1}, {1, -1}};

void solve() {
  int N;
  cin>>N;
  vector<int> a(N);
  for(int i=0; i<N; i++) {
    cin>>a[i];
  }

  ll op = 0;
  //cout<<"----------\n";
  for(int i=N-2; i>=0; i--) {
    //cout<<a[i]<<" "<<a[i+1]<<"\n";
    if((a[i]+1)/2<=a[i+1]) {
      a[i] = a[i]/2;
      op++;
    } else {
      op += a[i]/a[i+1];
      if(a[i]%a[i+1]) {
        a[i] = a[i]%a[i+1];
      } else {
        a[i] = a[i+1];
        op--;
      }
    }
  }
  cout<<op<<"\n";
}

// 1 4 4 3 5 7 6
// 1 4 4 3 5 1 6 6
// 1 4 4 3 4 1 1 6 6
// 1 4 4 3 3 1 1 1 6 6
// 1 4 4 3 2 1 1 1 1 6 6
// 1 4 4 3 1 1 1 1 1 1 6 6
//


// 1 7 6
// 1 1 6 6
//
// 1 3 4 6

int main ()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int t = 1;
    cin>>t;
    while (t--) solve();
    return 0;
}
