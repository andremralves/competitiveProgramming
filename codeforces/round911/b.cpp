/**
 *    author: mralves 
 *    created: 26-11-2023 15:39:26       
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

bool check(int a, int b, int c) {
  if(abs(b-c)%2==0)
    return 1;
  return 0;
}

void solve() {
  int a, b, c;
  cin>>a>>b>>c;
  cout<<check(a,b,c)<<" "<<check(b,a,c)<<" "<<check(c, a, b)<<"\n";
}

// 3 2 1
// 4 1 0

int main ()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int t = 1;
    cin>>t;
    while (t--) solve();
    return 0;
}
