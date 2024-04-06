/**
 *    author: mralves 
 *    created: 30-12-2023 11:46:49       
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

int squares[100];
void pre() {
  for(int i=1; i<=99; i++) {
    squares[i] = i*i;
  }
}

void solve() {
  int N; cin>>N;
  if(N == 1) {
    cout<<1<<"\n";
    return;
  }
  cout<<196<<string(N-3, '0')<<"\n";
  for(int i=0; i<=(N-3)/2; i++) {
    cout<<1<<string(i, '0')<<6<<string(i, '0')<<9<<string(N-i*2-3, '0')<<"\n";
    cout<<9<<string(i, '0')<<6<<string(i, '0')<<1<<string(N-i*2-3, '0')<<"\n";
  }
}

int main ()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    pre();

    int t = 1;
    cin>>t;
    while (t--) solve();
    return 0;
}
