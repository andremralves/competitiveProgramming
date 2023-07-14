/**
 *    author: mralves 
 *    created: 02-06-2023 23:23:51       
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

int Mex(vector<int> a) {
  sort(a.begin(), a.end());
  if (a[0] > 0) return 0;
  for (int i = 1; i < (int) a.size(); i++) {
    if (a[i] > a[i - 1] + 1) {
      return a[i - 1] + 1;
    }
  }
  return a.back() + 1;
}

void solve() {
    int n; cin>>n;
    vector<int> a(n);
    for(int i=0; i<n; i++) {
        cin>>a[i];
    }

    int mex = Mex(a);
    int l = n+1, r = -1;
    for(int i=0; i<n; i++) {
        if(a[i] == mex+1) {
            l = min(l, i);
            r = max(r, i);
        }
    }
    
    if(r == -1) {
        cout<<(mex==n?"No":"Yes")<<"\n";
    } else {
        for(int i=l; i<=r; i++) {
            a[i] = mex;
        }
        cout<<(Mex(a) == mex+1 ? "Yes" : "No")<<"\n";
    }
}

int main ()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int t = 1;
    cin>>t;
    while (t--) solve();
    return 0;
}
