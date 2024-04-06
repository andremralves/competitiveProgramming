/**
 *    author: mralves 
 *    created: 10-09-2023 10:48:59       
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
    int n, m;
    cin>>n>>m;

    vector<vector<int>> mat(n, vector<int>(m));
    int init = 1;
    for(int i=0; i<n; i++) {
        int cnt = init;
        for(int j=0; j<m; j++) {
            if((i+1) >= m and (i+1)%m == 0) {
                mat[i][j] = (1+cnt++)%m; 
            } else {
                mat[i][j] = (cnt++)%m; 
            }
        }
        init++;
    }

    int ans = min(m, n+1);
    if(ans == 1) ans = 0;
    cout<<ans<<"\n";
    for(auto r: mat) {
        for(auto c: r) {
            cout<<c<<" ";
        }
        cout<<"\n";
    }
}
// 1 2 3 4 5 0
// 2 3 4 5 0 1
// 3 4 5 0 1 2
// 4 5 0 1 2 3
// 5 0 1 2 3 4
// 1 2 3 4 0 5

int main ()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int t = 1;
    cin>>t;
    while (t--) solve();
    return 0;
}
