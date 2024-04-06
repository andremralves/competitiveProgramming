/**
 *    author: mralves 
 *    created: 23-12-2023 16:53:36       
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
  ll A, M, L, R; 
  cin>>A>>M>>L>>R;

  if(L == R and (L-A)%M==0) {
    cout<<"1\n"; 
    return;
  }
  if(A < L) {
    cout<<abs(A-R)/M-(abs(A-L)-1)/M<<"\n";
  } else if(A > R) {
    cout<<abs(A-L)/M-(abs(A-R)-1)/M<<"\n";
  } else {
    cout<<abs(A-L)/M+abs(A-R)/M+1<<"\n";
  }
}

int main ()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int t = 1;
    while (t--) solve();
    return 0;
}
