/**
 *    author: mralves 
 *    created: 25-10-2023 03:12:39       
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
  int Q;
  cin>>Q;

  multiset<int> right, left;
  while(Q--) {
    char op;
    int l, r;
    cin>>op>>l>>r;
    if(op == '+') {
      right.insert(r);
      left.insert(l);
    } else {
      right.erase(right.find(r));
      left.erase(left.find(l));
    }
    if(right.size() > 0 and *right.begin() < *left.rbegin()) {
      cout<<"YES\n";
    } else {
      cout<<"NO\n";
    }
  }
}

int main ()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int t = 1;
    //cin>>t;
    while (t--) solve();
    return 0;
}
